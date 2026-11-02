// rea decompile_all
// name: FUN_006ade90
// address: 0x6ade90
// body: available
// range: 0x6ade90-0x6adfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ade90(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *in_ECX;
  int iVar8;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar9;
  undefined4 extraout_ECX_01;
  
  if (*(char *)*param_1 != '\0') {
    uVar3 = in_ECX[0x26];
    if (uVar3 <= param_3) {
      param_3 = uVar3;
    }
    if ((uint)in_ECX[0x2a] < uVar3) {
      iVar8 = *(int *)(in_ECX[0x24] + in_ECX[0x2a] * 4);
    }
    else {
      iVar8 = 0;
    }
    piVar5 = operator_new(0xc);
    piVar1 = piVar5 + 1;
    piVar5[0] = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    *piVar5 = 0;
    *piVar1 = (int)&DAT_00bfe12c;
    piVar5[2] = 0;
    piVar6 = (int *)(*param_1 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *param_1;
    UNLOCK();
    piVar1 = (int *)(iVar2 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    piVar5[2] = param_2;
    puVar7 = (undefined4 *)(**(code **)(*in_ECX + 0xb8))(param_1,param_3);
    puVar4 = (undefined4 *)*piVar5;
    if ((puVar4 != puVar7) && (*piVar5 = (int)puVar7, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    FUN_00411110(param_3,piVar5);
    piVar1 = (int *)in_ECX[0x24];
    for (piVar6 = piVar1; piVar6 != piVar1 + in_ECX[0x26]; piVar6 = piVar6 + 1) {
      if (iVar8 == *piVar6) {
        iVar8 = (int)piVar6 - (int)piVar1 >> 2;
        goto LAB_006adf90;
      }
    }
    iVar8 = -1;
LAB_006adf90:
    in_ECX[0x2a] = iVar8;
    piVar5 = (int *)*piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x28))(1);
      FUN_006e5050(piVar5,param_3);
      iVar8 = extraout_ECX;
    }
    if (*(code **)(*in_ECX + 0x84) == FUN_006ada90) {
      FUN_006ad390(iVar8);
      uVar9 = extraout_ECX_00;
    }
    else {
      (**(code **)(*in_ECX + 0x84))();
      uVar9 = extraout_ECX_01;
    }
    if (in_ECX[0x2a] < 0) {
      FUN_006adb80(0,uVar9);
    }
  }
  return;
}

