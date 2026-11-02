// rea decompile_all
// name: FUN_00027364
// address: 0x27364
// body: available
// range: 0x27364-0x274af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00027364(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int *local_38;
  
  piVar3 = (int *)(param_1 + DAT_000274b0);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30) + 1) {
    FUN_0002a1c6(0,DAT_000274b4);
  }
  iVar2 = DAT_000274b8;
  iVar4 = *piVar3;
  do {
    if (iVar4 == 0) {
      bVar1 = *param_2;
      do {
        if (bVar1 == 0) {
          return 0;
        }
        for (piVar3 = *(int **)(&DAT_00002028 + param_1); piVar3 != (int *)0x0;
            piVar3 = (int *)*piVar3) {
          iVar4 = FUN_000400ea((int)piVar3 + iVar2,param_2);
          if (iVar4 != 0) {
            return (int)piVar3;
          }
        }
        param_2 = param_2 + *param_2 + 1;
        bVar1 = *param_2;
      } while( true );
    }
    local_38 = (int *)*piVar3;
    if ((((local_38[1] != 0) && (-1 < *(int *)(param_1 + 0xdc) - local_38[1])) &&
        ((char)local_38[4] == '\0')) &&
       ((((char)local_38[0x1b6] == '\0' && ((char)local_38[0x28f] == '\0')) &&
        ((char)local_38[0x368] == '\0')))) {
      if (*DAT_000274bc != 0) {
        FUN_0002a1c6(3,s_GetAuthInfoForName_internal_dele_000274c4,(int)local_38 + iVar2,
                     (int)local_38 + DAT_000274c0);
      }
      *piVar3 = *local_38;
      for (piVar5 = *(int **)(param_1 + 0x130); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
        if ((int *)piVar5[0xd] == local_38) {
          pbVar7 = (byte *)(piVar5 + 0x4c);
          bVar1 = *pbVar7;
          while (bVar1 != 0) {
            for (piVar6 = *(int **)(&DAT_00002028 + param_1); piVar6 != (int *)0x0;
                piVar6 = (int *)*piVar6) {
              iVar4 = FUN_000400ea((int)piVar6 + iVar2,pbVar7);
              if (iVar4 != 0) goto LAB_00027476;
            }
            pbVar7 = pbVar7 + *pbVar7 + 1;
            bVar1 = *pbVar7;
          }
          piVar6 = (int *)0x0;
LAB_00027476:
          piVar5[0xd] = (int)piVar6;
        }
      }
      FUN_001e58ac(local_38,FUN_000014e0);
      FUN_001e5828(local_38);
      local_38 = piVar3;
    }
    iVar4 = *local_38;
    piVar3 = local_38;
  } while( true );
}

