// rea decompile_all
// name: FUN_0020874c
// address: 0x20874c
// body: available
// range: 0x20874c-0x208957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0020874c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *local_38;
  char local_34;
  
  uVar7 = 0;
  FUN_0023231c(&local_38,param_1);
  if (local_34 == '\0') goto LAB_002088f4;
  param_4 = param_4 - param_3;
  uVar8 = *(uint *)((int)param_1 + *(int *)(*param_1 + -0xc) + 4) & 0xb0;
  if (uVar8 == 0x20) {
LAB_00208828:
    if ((param_3 == 0) ||
       (piVar5 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34),
       iVar3 = (**(code **)(*piVar5 + 0x30))(piVar5,param_2,param_3), iVar3 == param_3)) {
      if (uVar8 != 0x20) goto LAB_002088f4;
      iVar6 = 0;
      iVar3 = param_4;
      if (0 < param_4) {
        do {
          piVar5 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
          bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x3c);
          uVar8 = (uint)bVar1;
          if (((piVar5[1] & 8U) == 0) || (pbVar4 = (byte *)piVar5[9], (byte *)piVar5[10] == pbVar4))
          {
            uVar8 = (**(code **)(*piVar5 + 0x28))
                              (piVar5,uVar8,piVar5,*(code **)(*piVar5 + 0x28),bVar1);
          }
          else {
            piVar5[9] = (int)(pbVar4 + 1);
            *pbVar4 = bVar1;
          }
          iVar3 = iVar6;
        } while ((uVar8 != 0xffffffff) && (iVar6 = iVar6 + 1, iVar3 = param_4, iVar6 < param_4));
      }
      if (iVar3 == param_4) goto LAB_002088f4;
    }
  }
  else {
    iVar6 = 0;
    iVar3 = param_4;
    if (0 < param_4) {
      do {
        piVar5 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34);
        bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x3c);
        uVar2 = (uint)bVar1;
        if (((piVar5[1] & 8U) == 0) || (pbVar4 = (byte *)piVar5[9], (byte *)piVar5[10] == pbVar4)) {
          uVar2 = (**(code **)(*piVar5 + 0x28))
                            (piVar5,uVar2,*(code **)(*piVar5 + 0x28),piVar5,bVar1);
        }
        else {
          piVar5[9] = (int)(pbVar4 + 1);
          *pbVar4 = bVar1;
        }
        iVar3 = iVar6;
      } while ((uVar2 != 0xffffffff) && (iVar6 = iVar6 + 1, iVar3 = param_4, iVar6 < param_4));
    }
    if (iVar3 == param_4) goto LAB_00208828;
  }
  uVar7 = 1;
LAB_002088f4:
  if (uVar7 != 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + (int)param_1;
    uVar7 = *(uint *)(iVar3 + 0x10) | uVar7;
    if (*(int *)(iVar3 + 0x34) == 0) {
      uVar7 = uVar7 | 1;
    }
    FUN_001c1b14(iVar3,uVar7,0xffffffff);
  }
  return param_1;
}

