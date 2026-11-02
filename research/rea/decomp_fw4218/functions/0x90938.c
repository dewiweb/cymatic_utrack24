// rea decompile_all
// name: FUN_00090938
// address: 0x90938
// body: available
// range: 0x90938-0x90a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00090938(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  for (uVar5 = 0; uVar2 = FUN_0022e4a0(param_1 + 0x50), uVar5 < uVar2; uVar5 = uVar5 + 1) {
    FUN_001726d4(&local_20,param_1 + 0x5c);
    FUN_0023cff0(param_1 + 0x50,uVar5);
    local_1c = FUN_001b9eb8();
    piVar6 = (int *)((int)*(int **)(param_1 + 0x68) + *(int *)(**(int **)(param_1 + 0x68) + -0x1ec))
    ;
    uVar1 = FUN_001beccc(DAT_00090a64);
    (**(code **)(*piVar6 + 0x1a4))
              (piVar6,&local_20,DAT_00090a70,DAT_00090a6c,5,0,0,uVar1,DAT_00090a68);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_0023cc18(param_1 + 0x50);
  FUN_00111390(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x74) = 0;
  local_20 = FUN_002341f4(param_1 + 0x84);
  while( true ) {
    local_1c = FUN_002341cc(param_1 + 0x84);
    local_18 = local_1c;
    iVar4 = FUN_0022484c(&local_20,&local_18);
    if (iVar4 == 0) break;
    puVar3 = (undefined4 *)FUN_0022c26c(&local_20);
    (**(code **)(*(int *)*puVar3 + 0x20))((int *)*puVar3);
    FUN_0020930c(&local_20);
  }
  FUN_0008c3ac(param_1);
  return;
}

