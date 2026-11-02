// rea decompile_all
// name: FUN_0049ef20
// address: 0x49ef20
// body: available
// range: 0x49ef20-0x49f0fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_0049ef20(int *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int in_ECX;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_20;
  int local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x49ef2c;
  bVar1 = false;
  local_1c = in_ECX + 8;
  FUN_0046753d();
  local_8 = 0;
  uVar4 = FUN_0049f744();
  FUN_004652e4(uVar4);
  uVar4 = FUN_0049f74a();
  FUN_004652e4(uVar4);
  local_8._0_1_ = 2;
  iVar8 = *(int *)(in_ECX + 0x30) + -1;
  if (-1 < iVar8) {
    local_20 = iVar8 * 0x10;
    do {
      iVar6 = *(int *)(in_ECX + 0x28) + local_20;
      cVar3 = FUN_00465948();
      if ((((cVar3 != '\0') && (cVar3 = FUN_00465948(), cVar3 != '\0')) &&
          (*(int **)(iVar6 + 0xc) != (int *)0x0)) &&
         (cVar3 = (**(code **)(**(int **)(iVar6 + 0xc) + 4))(param_2), cVar3 != '\0')) {
        *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(in_ECX + 0x34);
        iVar8 = *(int *)(iVar6 + 0xc);
        *param_1 = iVar8;
        if (iVar8 != 0) {
          LOCK();
          *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
          UNLOCK();
        }
        goto LAB_0049f0dc;
      }
      local_20 = local_20 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  FUN_00467647();
  local_8._0_1_ = 3;
  iVar8 = 0;
  uVar7 = 0xffffffff;
  iVar6 = *(int *)(in_ECX + 0x30) + -1;
  if (-1 < iVar6) {
    puVar5 = (uint *)(iVar6 * 0x10 + 8 + *(int *)(in_ECX + 0x28));
    do {
      if (*puVar5 < uVar7) {
        iVar8 = iVar6;
        uVar7 = *puVar5;
      }
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + -4;
    } while (-1 < iVar6);
  }
  iVar8 = iVar8 * 0x10 + *(int *)(in_ECX + 0x28);
  FUN_00465317(iVar8);
  FUN_00465317(iVar8 + 4);
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(in_ECX + 0x34);
  if (DAT_0095d690 == (code *)0x0) {
    FUN_004a3fa2(&local_20);
  }
  else {
    (*DAT_0095d690)(&local_20,param_2);
  }
  FUN_004a4d78();
  FUN_00474d0f();
  if (*(int *)(in_ECX + 4) == 0) {
    FUN_0049f4b3();
    bVar1 = true;
    cVar3 = FUN_0049f5f6();
    bVar2 = true;
    if (cVar3 != '\0') goto LAB_0049f0a4;
  }
  bVar2 = false;
LAB_0049f0a4:
  if (bVar1) {
    FUN_004c4d7a();
  }
  if (bVar2) {
    FUN_004a4d78();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  *param_1 = iVar8;
  if (iVar8 != 0) {
    LOCK();
    *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
    UNLOCK();
  }
  FUN_004676ca();
LAB_0049f0dc:
  FUN_004652d6();
  FUN_004652d6();
  FUN_004675fb();
  return param_1;
}

