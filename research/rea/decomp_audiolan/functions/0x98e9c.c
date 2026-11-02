// rea decompile_all
// name: FUN_00098e9c
// address: 0x98e9c
// body: available
// range: 0x98e9c-0x98fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00098e9c(int param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_30 [8];
  int *local_28;
  
  uVar1 = FUN_0018afd4();
  pcVar2 = (char *)FUN_0008b800(auStack_30);
  *(undefined4 *)pcVar2 = s_l0__AudioHWService_00099000._0_4_;
  uVar3 = FUN_0008cf78();
  FUN_0008ce54(uVar3,s_l0__AudioHWService_00099000 + 4,auStack_30);
  uVar8 = 0;
  iVar4 = FUN_00157fbc(auStack_30);
  if (iVar4 != 0) {
    iVar4 = 0;
    while (iVar5 = (**(code **)(*local_28 + 0x80))(local_28,uVar1,iVar4), iVar5 != 0) {
      if ((*(char *)(param_1 + 6) != '\0') &&
         (((piVar6 = *(int **)(iVar5 + 0x14), piVar6 == (int *)0x0 ||
           (iVar7 = (**(code **)(*piVar6 + 0x1c))(piVar6,*(undefined4 *)(iVar5 + 0x10)), iVar7 == 0)
           ) && ((param_3 & 1) != 0)))) {
        piVar6 = *(int **)(iVar5 + 0x14);
        if ((*param_2 & 1) == 0) {
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x14))(piVar6,*(undefined4 *)(iVar5 + 0x10));
          }
        }
        else if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x10))(piVar6,*(undefined4 *)(iVar5 + 0x10));
        }
      }
      piVar6 = *(int **)(iVar5 + 0x14);
      uVar8 = uVar8 >> 1;
      if ((piVar6 != (int *)0x0) &&
         (iVar5 = (**(code **)(*piVar6 + 0x18))(piVar6,*(undefined4 *)(iVar5 + 0x10)), iVar5 == 1))
      {
        uVar8 = uVar8 | 0x80;
      }
      iVar4 = iVar4 + 1;
      param_3 = param_3 >> 1;
      *param_2 = *param_2 >> 1;
      if (7 < iVar4) {
        *param_2 = (byte)uVar8;
        FUN_0008b818(auStack_30);
        return 1;
      }
    }
  }
  FUN_0008b818(auStack_30);
  return 0;
}

