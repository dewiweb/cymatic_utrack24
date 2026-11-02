// rea decompile_all
// name: FUN_000106b0
// address: 0x106b0
// body: available
// range: 0x106b0-0x10833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000106b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_14;
  
  iVar1 = param_1[2];
  local_14 = param_2;
  FUN_001f00bc();
  (**(code **)(*param_1 + 0x74))(param_1);
  (**(code **)(*param_1 + 0x19c))(param_1);
  FUN_0000e9ec(param_1);
  if ((char)param_1[3] == '\x02') {
    if (*(char *)((int)param_1 + 0x331) == '\0') {
      if (((short)local_14 == 0xff) || ((short)local_14 == -1)) goto LAB_00010788;
    }
    else {
      iVar2 = FUN_000104ec(param_1,&local_14,*(undefined1 *)((int)param_1 + 0x32f),
                           *(undefined1 *)((int)param_1 + 0x332),
                           *(undefined1 *)((int)param_1 + 0x333));
      if (iVar2 == 0) {
        piVar4 = (int *)param_1[0xf];
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4,param_1,7);
        }
        *(undefined1 *)(param_1 + 9) = 1;
        goto LAB_00010788;
      }
    }
  }
  else {
    iVar2 = FUN_000103c4(param_1,&local_14);
    if (iVar2 == 0) {
      piVar4 = (int *)param_1[0xf];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4,param_1,7);
      }
      *(undefined1 *)(param_1 + 9) = 1;
      goto LAB_00010788;
    }
  }
  iVar2 = FUN_0000ab34(param_1 + 1,(int)(short)local_14);
  if (iVar2 != 0) {
    uVar3 = FUN_000b5ea4(param_1);
    FUN_001f06d4(iVar1 + 0x118);
    return uVar3;
  }
LAB_00010788:
  FUN_001f06d4(iVar1 + 0x118);
  return 0;
}

