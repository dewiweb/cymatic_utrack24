// rea decompile_all
// name: FUN_004562d0
// address: 0x4562d0
// body: available
// range: 0x4562d0-0x456368 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004562d0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar3;
  int *extraout_ECX_01;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar4 = 0;
  iVar5 = 0;
  local_8 = 0;
  cVar1 = *(char *)((int)in_ECX + 0x3e);
  piVar3 = in_ECX;
  do {
    if (cVar1 != '\0') {
      return;
    }
    if (*(char *)((int)in_ECX + 0x3d) != '\0') {
      *in_ECX = iVar4;
      in_ECX[3] = (int)in_ECX + 0x3f;
      in_ECX[1] = iVar5;
      in_ECX[4] = 0x8000;
      if ((char)in_ECX[0xf] == '\0') {
        iVar2 = FUN_00618f20();
        piVar3 = extraout_ECX_00;
      }
      else {
        iVar2 = FUN_006197b0(piVar3);
        piVar3 = extraout_ECX;
      }
      *(undefined1 *)(in_ECX + 0xf) = 0;
      if (iVar2 != 0) {
        iVar4 = local_8;
        if (iVar2 != 1) goto LAB_0045635a;
        *(undefined1 *)((int)in_ECX + 0x3e) = 1;
      }
      piVar3 = (int *)(0x8000 - in_ECX[4]);
      iVar4 = local_8 + (iVar5 - in_ECX[1]);
      iVar5 = in_ECX[1];
      local_8 = iVar4;
      if (0 < (int)piVar3) {
        (**(code **)(*param_1 + 0x10))((int)in_ECX + 0x3f,piVar3);
        piVar3 = extraout_ECX_01;
      }
    }
LAB_0045635a:
    cVar1 = *(char *)((int)in_ECX + 0x3e);
  } while( true );
}

