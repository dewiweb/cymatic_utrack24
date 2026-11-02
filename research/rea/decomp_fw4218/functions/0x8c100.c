// rea decompile_all
// name: FUN_0008c100
// address: 0x8c100
// body: available
// range: 0x8c100-0x8c277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008c100(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  
  uVar1 = FUN_001b4f14(param_1);
  uVar2 = FUN_001b4ef0(param_1);
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar3 = 0x4e;
  }
  else {
    uVar3 = 0x59;
  }
  FUN_00002898(DAT_0008c278,*(undefined1 *)(param_1 + 0x1d),*(undefined1 *)(param_1 + 0x1c),uVar2,
               uVar1,uVar3);
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xfffffffd;
    FUN_00172844(auStack_1c,*(undefined4 *)(param_1 + 0x6c));
    if ((*(char *)(param_1 + 0x1d) == '\x02') || (*(char *)(param_1 + 0x1d) == '\x04')) {
      piVar6 = (int *)((int)*(int **)(param_1 + 0x68) +
                      *(int *)(**(int **)(param_1 + 0x68) + -0x1ec));
      local_28 = FUN_001beccc(DAT_0008c27c);
      local_24 = DAT_0008c280;
      iVar4 = (**(code **)(*piVar6 + 0x1a8))(piVar6,DAT_0008c288,DAT_0008c284,1,0,0);
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x1d) = 0;
        FUN_00111390(param_1 + 0x20);
        local_28 = FUN_002341f4(param_1 + 0x84);
        while( true ) {
          local_24 = FUN_002341cc(param_1 + 0x84);
          local_20 = local_24;
          iVar4 = FUN_0022484c(&local_28,&local_20);
          if (iVar4 == 0) break;
          puVar5 = (undefined4 *)FUN_0022c26c(&local_28);
          (**(code **)(*(int *)*puVar5 + 0x10))((int *)*puVar5);
          FUN_0020930c(&local_28);
        }
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
    FUN_0017286c(auStack_1c);
  }
  return uVar1;
}

