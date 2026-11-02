// rea decompile_all
// name: FUN_004af5e0
// address: 0x4af5e0
// body: available
// range: 0x4af5e0-0x4af779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004af5e0(float *param_1)

{
  float fVar1;
  char cVar2;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  if ((((*param_1 < fVar1) || (param_1[1] < in_ECX[1])) || (in_ECX[2] + fVar1 <= *param_1)) ||
     (in_ECX[3] + in_ECX[1] <= param_1[1])) {
    if (((param_1[2] < fVar1) || (param_1[3] < in_ECX[1])) ||
       ((in_ECX[2] + fVar1 <= param_1[2] || (in_ECX[3] + in_ECX[1] <= param_1[3])))) {
      cVar2 = FUN_00471ed0(*param_1,param_1[1],param_1[2],param_1[3],fVar1,in_ECX[1],
                           fVar1 + in_ECX[2],in_ECX[1]);
      if (cVar2 == '\0') {
        cVar2 = FUN_004b05d0(in_ECX[2] + *in_ECX,in_ECX[1],in_ECX[2] + *in_ECX,in_ECX[3] + in_ECX[1]
                            );
        if (cVar2 == '\0') {
          cVar2 = FUN_004b05d0(*in_ECX + in_ECX[2],in_ECX[3] + in_ECX[1],*in_ECX,
                               in_ECX[3] + in_ECX[1]);
          if (cVar2 == '\0') {
            cVar2 = FUN_004b05d0(*in_ECX,in_ECX[1] + in_ECX[3],*in_ECX,in_ECX[1]);
            if (cVar2 == '\0') {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

