// rea decompile_all
// name: FUN_0005f878
// address: 0x5f878
// body: available
// range: 0x5f878-0x5f9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0005f878(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = param_1[10];
  if ((char)iVar2 == '\0') {
    if (*(char *)((int)param_1 + 0x2a) != '\0') {
      if ((uint)(param_1[6] - param_3) < param_2) {
        *(undefined1 *)((int)param_1 + 0x2a) = 0;
        *(undefined1 *)(param_1 + 10) = 1;
        iVar3 = param_1[6];
        iVar2 = FUN_000d97d4();
        if (iVar2 != 0) {
          *(undefined1 *)(param_1 + 0x22) = 6;
          local_2e = (undefined1)param_1[1];
          local_30 = 1;
          local_2f = 1;
          local_28 = 0;
          uStack_24 = 0;
          local_2d = 6;
          local_2c = iVar3;
          FUN_001b2acc(iVar2,&local_30,0);
        }
        return '\x01';
      }
    }
  }
  else if (*(char *)((int)param_1 + 0x2b) != '\0') {
    if (*(char *)((int)param_1 + 0x2b) == '\x02') {
      if ((uint)(param_1[7] - param_3) < param_2) {
        *(undefined1 *)((int)param_1 + 0x2b) = 0;
        (**(code **)(*param_1 + 0x1c))(param_1,1);
      }
    }
    else if ((uint)(param_1[7] - param_3) < param_2) {
      *(undefined1 *)((int)param_1 + 0x2b) = 0;
      *(undefined1 *)((int)param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      iVar3 = param_1[7];
      uVar1 = (**(code **)(*param_1 + 0x20))();
      iVar2 = FUN_000d97d4();
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x22) = 7;
        local_2e = (undefined1)param_1[1];
        local_30 = 1;
        local_2f = 1;
        local_2d = 7;
        uStack_24 = 0;
        local_2c = iVar3;
        local_28 = uVar1;
        FUN_001b2acc(iVar2,&local_30,0);
      }
      return '\0';
    }
  }
  return (char)iVar2;
}

