// rea decompile_all
// name: FUN_004a1edd
// address: 0x4a1edd
// body: available
// range: 0x4a1edd-0x4a207c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x004a2027) */
/* WARNING: Removing unreachable block (ram,0x004a202d) */

void FUN_004a1edd(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *extraout_EDX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 local_14 [12];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x4a1ee9;
  FUN_0049f4b3();
  iVar7 = 0;
  local_8 = 1;
  iVar3 = thunk_FUN_0046087d();
  local_20 = local_14;
  FUN_0047604f();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_28 = local_14;
      FUN_0047604f();
      iVar6 = *(int *)(param_2 + 0x1c);
      if (0 < iVar6) {
        piVar4 = *(int **)(param_2 + 0x14);
        do {
          piVar1 = (int *)*piVar4;
          if ((*piVar1 <= iVar5) && (iVar5 < piVar1[1])) {
            if ((undefined1 *)piVar1[2] != (undefined1 *)0x0) {
              local_28 = (undefined1 *)piVar1[2];
            }
            if (piVar1[3] != 0) {
              FUN_004d076d();
              piVar4 = extraout_EDX;
            }
          }
          piVar4 = piVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if ((0 < iVar5) &&
         (((local_28 != local_20 && (cVar2 = FUN_0049f620(), cVar2 != '\0')) ||
          (cVar2 = FUN_004733c7(), cVar2 != '\0')))) {
        FUN_00439b5a();
        FUN_004d076d();
        FUN_004a691d();
        iVar7 = iVar5;
      }
      local_20 = local_28;
      FUN_004d076d();
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
    if (iVar7 < iVar3) {
      FUN_00439b5a();
      FUN_004d076d();
      FUN_004a691d();
    }
  }
  local_8 = local_8 & 0xffffff00;
  _free((void *)0x0);
  FUN_004c4d7a();
  return;
}

