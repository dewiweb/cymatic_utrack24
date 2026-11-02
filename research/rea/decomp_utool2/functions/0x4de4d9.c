// rea decompile_all
// name: FUN_004de4d9
// address: 0x4de4d9
// body: available
// range: 0x4de4d9-0x4de56e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4de56e with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004de4d9(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + (1 - (int)(param_1 + 1));
  if ((char *)(-1 - param_3) < pcVar6) {
    uVar5 = 0xc;
  }
  else {
    pcVar7 = pcVar6 + param_3 + 1;
    iVar3 = __calloc_base(pcVar7,1);
    if (param_3 != 0) {
      iVar4 = FUN_004db41b(iVar3,pcVar7,param_2,param_3);
      if (iVar4 != 0) goto LAB_004de562;
    }
    iVar4 = FUN_004db41b(iVar3 + param_3,(int)pcVar7 - param_3,param_1,pcVar6);
    if (iVar4 != 0) {
LAB_004de562:
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    uVar5 = append(iVar3);
    FID_conflict__free((void *)0x0);
  }
  return uVar5;
}

