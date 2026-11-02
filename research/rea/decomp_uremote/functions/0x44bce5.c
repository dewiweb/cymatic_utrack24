// rea decompile_all
// name: FUN_0044bce5
// address: 0x44bce5
// body: available
// range: 0x44bce5-0x44bd7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044bce5(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_004c121d();
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar1 = FUN_004c121d();
    if (0 < iVar1) {
      do {
        iVar1 = *(int *)(in_ECX + 0x70);
        iVar2 = iVar1 * iVar3;
        uVar4 = 0;
        FUN_004c1221(0,iVar2,iVar1);
        FUN_004c09cc(uVar4,iVar2,iVar1);
        uVar4 = FUN_004c1221(0,&juce::Component::RTTI_Type_Descriptor,
                             &RemoteDisplay::MyItem::RTTI_Type_Descriptor,0);
        iVar1 = FUN_005cdbcf(uVar4);
        if (iVar1 != 0) {
          FUN_00440206();
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_004c121d();
      } while (iVar3 < iVar1);
    }
    iVar1 = FUN_004c121d();
    FUN_004c0be5(iVar1 * *(int *)(in_ECX + 0x70));
  }
  return;
}

