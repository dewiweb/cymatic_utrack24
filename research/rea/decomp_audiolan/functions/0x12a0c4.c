// rea decompile_all
// name: FUN_0012a0c4
// address: 0x12a0c4
// body: available
// range: 0x12a0c4-0x12a2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0012a0c4(int param_1,undefined4 param_2,int *param_3,ushort *param_4,ushort *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int local_70;
  int local_6c;
  ushort local_68;
  undefined1 auStack_60 [8];
  int local_58;
  undefined1 auStack_50 [28];
  int iStack_34;
  undefined4 local_30;
  int *piStack_2c;
  ushort *puStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  puStack_28 = param_4;
  piVar1 = (int *)FUN_0012cd60(param_2);
  do {
    if ((piVar1 == (int *)0x0) || (0x31 < *param_4)) {
      return 1;
    }
    (**(code **)(*piVar1 + 0x5c))(&local_70,piVar1);
    iVar7 = 0;
    uVar3 = 0;
    if (*param_4 != 0) {
      do {
        FUN_0010f5fc(auStack_60,*param_3 + iVar7 * 0x18);
        iVar2 = FUN_0015e940(auStack_60,param_1 + 0x40);
        if ((iVar2 != 0) &&
           (iVar2 = *param_3 + iVar7 * 0x18,
           local_6c == *(int *)(iVar2 + 0x14) && *(int *)(iVar2 + 0x10) == local_70)) {
          iVar7 = iVar7 * 0x18 + 0xc;
          if (*(ushort *)(*param_3 + iVar7) <= local_68) {
            *(ushort *)(*param_3 + iVar7) = local_68 + 1;
          }
          goto LAB_0012a264;
        }
        uVar3 = (uint)*param_4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar3);
    }
    if (uVar3 == *param_5) {
      iVar7 = FUN_00160010(local_30);
      uVar6 = DAT_0012a2c4;
      uVar3 = iVar7 + (uint)*param_5 & 0xfffeffff;
      *param_5 = (ushort)uVar3;
      iVar7 = FUN_0016d774(uVar3 * 0x18,uVar6);
      if ((iVar7 == 0) || (iVar7 = FUN_0016dd70(iVar7,DAT_0012a2c8,0x18,uVar3), iVar7 == 0)) {
        return 0;
      }
      FUN_000037d0(iVar7,*param_3,(uint)*param_4 * 0x18);
      FUN_0016d744(*param_3);
      *param_3 = iVar7;
    }
    iVar2 = local_6c;
    iVar7 = local_70;
    local_58 = param_1 + 0x40;
    sVar5 = local_68 + 1;
    iVar4 = FUN_0010f638(auStack_50);
    FUN_0010f650(iVar4,local_58);
    *(int *)(iVar4 + 0x10) = iVar7;
    *(int *)(iVar4 + 0x14) = iVar2;
    *(short *)(iVar4 + 0xc) = sVar5;
    iVar7 = *param_3 + (uint)*param_4 * 0x18;
    FUN_0010f650(iVar7,iVar4);
    *(undefined2 *)(iVar7 + 0xc) = *(undefined2 *)(iVar4 + 0xc);
    uVar6 = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar7 + 0x14) = uVar6;
    *param_4 = *param_4 + 1;
LAB_0012a264:
    piVar1 = (int *)FUN_0012caa0(local_30,piVar1);
  } while( true );
}

