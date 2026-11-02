// rea decompile_all
// name: FUN_0048f725
// address: 0x48f725
// body: available
// range: 0x48f725-0x48f85e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0048f725(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = in_EAX[2] + in_EAX[1] + *in_EAX;
  iVar4 = FUN_00490972(*in_EAX,100000,iVar3);
  if ((iVar4 != 0) && (iVar4 = FUN_00490972(in_EAX[1],100000,iVar3), iVar4 != 0)) {
    iVar4 = *in_EAX;
    iVar1 = in_EAX[1];
    iVar5 = in_EAX[5] + in_EAX[4] + in_EAX[3];
    iVar6 = FUN_00490972(in_EAX[3],100000,iVar5);
    if ((iVar6 != 0) && (iVar6 = FUN_00490972(in_EAX[4],100000,iVar5), iVar6 != 0)) {
      iVar6 = in_EAX[3];
      iVar2 = in_EAX[4];
      iVar7 = in_EAX[8] + in_EAX[6] + in_EAX[7];
      iVar8 = FUN_00490972(in_EAX[6],100000,iVar7);
      if ((iVar8 != 0) && (iVar8 = FUN_00490972(in_EAX[7],100000,iVar7), iVar8 != 0)) {
        iVar7 = iVar3 + iVar5 + iVar7;
        iVar3 = in_EAX[7];
        iVar4 = FUN_00490972(iVar4 + iVar6 + in_EAX[6],100000,iVar7);
        if (iVar4 != 0) {
          iVar3 = FUN_00490972(iVar1 + iVar2 + iVar3,100000,iVar7);
          return iVar3 == 0;
        }
      }
    }
  }
  return true;
}

