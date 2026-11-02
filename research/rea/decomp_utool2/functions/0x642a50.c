// rea decompile_all
// name: FUN_00642a50
// address: 0x642a50
// body: available
// range: 0x642a50-0x642b55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00642a50(int param_1,int param_2,undefined4 param_3,float param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,float param_8)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *in_ECX;
  float fVar4;
  int local_c;
  
  iVar3 = *in_ECX;
  local_c = 0;
  fVar2 = *(float *)(iVar3 + 0xc + param_1 * 0x1c);
  iVar1 = param_1 + param_2;
  fVar4 = (*(float *)(iVar3 + -8 + iVar1 * 0x1c) + *(float *)(iVar3 + -0x10 + iVar1 * 0x1c)) - fVar2
  ;
  if (param_4 < fVar4) {
    if (param_8 < 1.0) {
      FUN_006429a0(param_1,param_2);
      fVar4 = ((*(float *)(*in_ECX + -8 + iVar1 * 0x1c) + *(float *)(*in_ECX + -0x10 + iVar1 * 0x1c)
               ) - fVar2) - 0.5;
    }
    if (param_4 < fVar4) {
      local_c = FUN_00642dd0(param_6,param_1,param_1 + param_2);
      param_2 = param_2 - local_c;
    }
  }
  FUN_00642800(param_1,param_2,param_3,param_4,param_5,param_7);
  return local_c;
}

