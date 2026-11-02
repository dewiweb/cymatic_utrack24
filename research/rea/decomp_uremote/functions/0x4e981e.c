// rea decompile_all
// name: FUN_004e981e
// address: 0x4e981e
// body: available
// range: 0x4e981e-0x4e98f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e981e(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  undefined1 local_24 [8];
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4e982a;
  FUN_0049f5e8();
  FUN_004c1e29(local_24,0x1000201,0);
  iVar5 = *(int *)(param_1 + 0x104);
  while (iVar5 = iVar5 + -1, local_14 = iVar5, -1 < iVar5) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + iVar5 * 4);
    local_18 = *(undefined4 *)(param_1 + 0x110);
    cVar3 = FUN_0049f620();
    if (cVar3 != '\0') {
      FUN_0049f5e8();
      iVar2 = *(int *)(iVar1 + 0x10);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        local_1c = *(int *)(*(int *)(iVar1 + 8) + iVar2 * 4);
        uVar4 = FUN_004e7e2d(local_1c);
        local_8 = 0;
        fVar6 = (float10)FUN_0049fa7b(uVar4);
        local_8 = 0xffffffff;
        *(float *)(local_1c + 4) = (float)fVar6;
        FUN_004652d6();
        iVar5 = local_14;
      }
    }
    FUN_004d076d();
  }
  FUN_004ec4ea(param_1);
  FUN_004e9f79();
  FUN_004ea08f();
  FUN_004c1613(param_1);
  return;
}

