// rea decompile_all
// name: FUN_0063f910
// address: 0x63f910
// body: available
// range: 0x63f910-0x63f9b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063f910(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 **ppuVar8;
  int *piVar9;
  undefined4 *local_8;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar7 = 0;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      piVar6 = (int *)(*(int *)(in_ECX + 0x14) + 8 + iVar5);
      if (*(int *)(*piVar6 + 8) == 0) {
        ppuVar8 = &local_8;
        piVar9 = piVar6;
        FUN_004681b0(ppuVar8,piVar6);
        puVar3 = (undefined4 *)FUN_004682f0(ppuVar8,piVar9);
        uVar2 = *(undefined4 *)(*piVar6 + 8);
        *(undefined4 *)(*piVar6 + 8) = *puVar3;
        *puVar3 = uVar2;
        if (local_8 != (undefined4 *)0x0) {
          LOCK();
          piVar9 = local_8 + 1;
          iVar4 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)*local_8)(1);
          }
        }
      }
      iVar4 = FUN_006f6dd6(*(undefined4 *)(*piVar6 + 8),0,&juce::Typeface::RTTI_Type_Descriptor,
                           &juce::WindowsDirectWriteTypeface::RTTI_Type_Descriptor,0);
      if (iVar4 == 0) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar7 < iVar1);
  }
  return 1;
}

