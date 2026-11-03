$ErrorActionPreference = 'Stop'
$root = (Resolve-Path 'work/starfox').Path
$exe = (Resolve-Path 'work/selevet-build/bin/eglantine.exe').Path
$game = 'C:\ns2roms\StarFox\Star Fox (Switch 2)\base\exefs\main'
$env:EDEN_BENCH_LOG = Join-Path $root 'patched-bench.log'
$env:EDEN_NX2_FRAME_CAPTURE = Join-Path $root 'capture'
$env:EDEN_NX2_TENSOR = '1'
$env:EDEN_NX2_TEMPORAL_UPSCALE = '0'
New-Item -ItemType Directory -Force $env:EDEN_NX2_FRAME_CAPTURE | Out-Null
$process = Start-Process -FilePath $exe -ArgumentList @('-g', ('"' + $game + '"')) -WorkingDirectory (Split-Path $exe) -PassThru
Write-Output "Started patched Eglantine PID $($process.Id)"
