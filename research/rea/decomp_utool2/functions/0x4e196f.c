// rea decompile_all
// name: _TestDefaultLanguage
// address: 0x4e196f
// body: available
// range: 0x4e196f-0x4e19de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2015 Release */

undefined4 _TestDefaultLanguage(uint param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  uint local_8;
  
  iVar3 = FUN_004d90bf();
  iVar4 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)&local_8,2);
  if (iVar4 == 0) {
LAB_004e19a5:
    uVar5 = 0;
  }
  else {
    if ((param_1 != local_8) && (param_2 != 0)) {
      psVar6 = *(short **)(iVar3 + 0x50);
      psVar1 = psVar6 + 1;
      do {
        sVar2 = *psVar6;
        psVar6 = psVar6 + 1;
      } while (sVar2 != 0);
      iVar3 = _GetPrimaryLen(*(undefined4 *)(iVar3 + 0x50));
      if (iVar3 == (int)psVar6 - (int)psVar1 >> 1) goto LAB_004e19a5;
    }
    uVar5 = 1;
  }
  return uVar5;
}

