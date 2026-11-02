// rea decompile_all
// name: FUN_004a3470
// address: 0x4a3470
// body: available
// range: 0x4a3470-0x4a351a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a3470(float *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 local_54 [64];
  int local_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((*(char *)(param_1 + 0xf) != '\x03') && ((*(byte *)(in_ECX + 0x69) & 0x10) == 0)) {
    if ((*(int *)(in_ECX + 0xc) != 0) && (cVar2 = FUN_006e6320(), cVar2 == '\0')) {
      return;
    }
    local_14 = 0;
    iStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    piVar3 = (int *)FUN_004a37e0(param_1[3],&local_14);
    if ((piVar3 != (int *)0x0) &&
       ((local_14 <= (int)param_1[2] || (*(char *)(*(int *)(in_ECX + 0x7c) + 0xb0) == '\0')))) {
      iVar1 = *piVar3;
      uVar4 = FUN_006c9c30(local_54,*param_1 - (float)local_14,param_1[1] - (float)iStack_10);
      (**(code **)(iVar1 + 0x34))(uVar4);
    }
  }
  return;
}

