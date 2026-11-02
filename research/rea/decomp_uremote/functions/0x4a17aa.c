// rea decompile_all
// name: FUN_004a17aa
// address: 0x4a17aa
// body: available
// range: 0x4a17aa-0x4a1bb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x004a18be) */
/* WARNING: Removing unreachable block (ram,0x004a18ce) */
/* WARNING: Removing unreachable block (ram,0x004a18e7) */
/* WARNING: Removing unreachable block (ram,0x004a191c) */
/* WARNING: Removing unreachable block (ram,0x004a192c) */
/* WARNING: Removing unreachable block (ram,0x004a19b0) */
/* WARNING: Removing unreachable block (ram,0x004a1951) */
/* WARNING: Removing unreachable block (ram,0x004a1957) */
/* WARNING: Removing unreachable block (ram,0x004a19ae) */
/* WARNING: Removing unreachable block (ram,0x004a19b2) */
/* WARNING: Removing unreachable block (ram,0x004a1ad3) */
/* WARNING: Removing unreachable block (ram,0x004a1a1c) */

void FUN_004a17aa(int *param_1,int param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_004a6f5e();
  thunk_FUN_0046ea7f();
  FUN_004a1edd();
  FUN_004a1ded();
  local_24 = 0;
  local_2c = 0;
  local_20 = 0;
  local_1c = 0;
  local_30 = 0;
  if (0 < param_1[2]) {
    do {
      iVar7 = local_30 * 4;
      iVar8 = *(int *)(iVar7 + *param_1);
      FUN_004a207d();
      FUN_0049facf();
      FUN_004652d6();
      if (local_1c == 0) {
        iVar4 = FUN_005af82d();
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004a113d();
        }
        if (iVar4 != 0) {
          local_1c = iVar4;
        }
      }
      if (local_20 == 0) {
        iVar4 = FUN_005af82d();
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004a11df();
        }
        if (iVar4 != 0) {
          local_20 = iVar4;
        }
      }
      if ((*(char *)(iVar8 + 0x24) != '\0') || (*(char *)(iVar8 + 0x25) != '\0')) {
        local_24 = local_24 + 1;
      }
      local_30 = local_30 + 1;
      if (local_30 < (uint)param_1[2]) {
        iVar7 = *(int *)(iVar7 + 4 + *param_1);
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) {
        FUN_004a1bba();
        uVar5 = FUN_00439b5a();
        *(int *)(local_20 + 0xc) = local_2c;
        *(undefined4 *)(local_20 + 0x10) = uVar5;
LAB_004a1ae6:
        local_1c = 0;
      }
      else {
        cVar3 = FUN_0049f620();
        if ((cVar3 != '\0') || (cVar3 = FUN_004733c7(), cVar3 != '\0')) {
          local_1c = 0;
          FUN_004a1bba();
        }
        if (*(int *)(iVar8 + 0x1c) != *(int *)(iVar7 + 0x1c)) {
          if ((local_1c == 0) && (iVar8 = FUN_005af82d(), iVar8 != 0)) {
            FUN_004a113d();
          }
          FUN_004a1bba();
          uVar5 = FUN_00439b5a();
          *(int *)(local_20 + 0xc) = local_2c;
          *(undefined4 *)(local_20 + 0x10) = uVar5;
          local_2c = local_24;
          goto LAB_004a1ae6;
        }
      }
      _free((void *)0x0);
      _free((void *)0x0);
    } while ((int)local_30 < param_1[2]);
  }
  uVar2 = *(uint *)(param_2 + 8);
  if ((uVar2 & 6) != 0) {
    fVar1 = *(float *)(param_3 + 0xc);
    iVar8 = 0;
    if (0 < *(int *)(param_3 + 8)) {
      do {
        FUN_004a13ed();
        pfVar6 = (float *)FUN_004a1206();
        param_1 = (int *)(fVar1 - (pfVar6[1] - *pfVar6));
        if ((uVar2 >> 2 & 1) != 0) {
          param_1 = (int *)((float)param_1 * 0.5);
        }
        iVar7 = FUN_004a13ed();
        iVar8 = iVar8 + 1;
        *(float *)(iVar7 + 0x14) = *(float *)(iVar7 + 0x14) + (float)param_1;
      } while (iVar8 < *(int *)(param_3 + 8));
    }
  }
  if (local_1c != 0) {
    FUN_004a11cf();
    FUN_005af7b6();
  }
  if (local_20 != 0) {
    thunk_FUN_004a53fa();
    FUN_005af7b6();
  }
  return;
}

