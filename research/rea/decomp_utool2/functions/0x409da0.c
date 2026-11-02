// rea decompile_all
// name: FUN_00409da0
// address: 0x409da0
// body: available
// range: 0x409da0-0x409e9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409da0(int param_1,int param_2,uint param_3,float param_4,float param_5)

{
  int in_ECX;
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(in_ECX + 0x94) == '\0') {
    if (param_4 == param_5) {
      FUN_00409970(param_1,param_2,param_3,param_4);
      return;
    }
    iVar2 = param_3 - 1;
    fVar5 = (param_5 - param_4) / (float)(int)param_3;
    pfVar1 = (float *)(*(int *)(*(int *)(in_ECX + 0xc) + param_1 * 4) + param_2 * 4);
    if (-1 < iVar2) {
      if (3 < (int)param_3) {
        param_3 = param_3 >> 2;
        iVar2 = iVar2 + param_3 * -4;
        do {
          *pfVar1 = param_4 * *pfVar1;
          fVar4 = fVar5 + fVar5 + param_4;
          pfVar1[1] = (fVar5 + param_4) * pfVar1[1];
          fVar3 = fVar5 + fVar4;
          param_4 = fVar5 + fVar3;
          pfVar1[2] = fVar4 * pfVar1[2];
          pfVar1[3] = fVar3 * pfVar1[3];
          pfVar1 = pfVar1 + 4;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      for (; -1 < iVar2; iVar2 = iVar2 + -1) {
        *pfVar1 = param_4 * *pfVar1;
        pfVar1 = pfVar1 + 1;
        param_4 = param_4 + fVar5;
      }
    }
  }
  return;
}

