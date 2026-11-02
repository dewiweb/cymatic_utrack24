// rea decompile_all
// name: FUN_0060d110
// address: 0x60d110
// body: available
// range: 0x60d110-0x60d368 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0060d110(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int local_20;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (in_ECX[0x2d] == 0) {
    iVar1 = in_ECX[7];
  }
  else {
    iVar1 = in_ECX[6];
  }
  local_20 = SUB84((double)((float)iVar1 * (float)in_ECX[0x2a]) + 6755399441055744.0,0);
  if ((param_2 < local_20) && (iVar1 = (in_ECX[0x48] / 0xc) * 0xc, iVar1 <= in_ECX[0x49])) {
    do {
      iVar2 = 0;
      local_8 = iVar1;
      do {
        iVar3 = (uint)(byte)(&DAT_00bfe010)[iVar2] + iVar1;
        if ((in_ECX[0x48] <= iVar3) && (iVar3 <= in_ECX[0x49])) {
          (**(code **)(*in_ECX + 0xcc))(iVar3,in_ECX[0x2c],&local_c,&local_14);
          (**(code **)(*in_ECX + 0xcc))(in_ECX[0x48],in_ECX[0x2c],&local_10,local_18);
          local_c = local_c - local_10;
          iVar1 = local_8;
          if ((local_c <= param_1) && (param_1 < local_14 + local_c)) {
            *param_3 = (float)param_2 / (float)local_20;
            return iVar3;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 5);
      iVar1 = iVar1 + 0xc;
    } while (iVar1 <= in_ECX[0x49]);
  }
  iVar1 = (in_ECX[0x48] / 0xc) * 0xc;
  if (iVar1 <= in_ECX[0x49]) {
    do {
      iVar2 = 0;
      local_8 = iVar1;
      do {
        iVar3 = (uint)(byte)(&DAT_00bfe018)[iVar2] + iVar1;
        if ((in_ECX[0x48] <= iVar3) && (iVar3 <= in_ECX[0x49])) {
          (**(code **)(*in_ECX + 0xcc))(iVar3,in_ECX[0x2c],&local_c,&local_10);
          (**(code **)(*in_ECX + 0xcc))(in_ECX[0x48],in_ECX[0x2c],&local_14,local_18);
          local_c = local_c - local_14;
          iVar1 = local_8;
          if ((local_c <= param_1) && (param_1 < local_10 + local_c)) {
            if (in_ECX[0x2d] == 0) {
              iVar1 = in_ECX[7];
            }
            else {
              iVar1 = in_ECX[6];
            }
            *param_3 = (float)param_2 / (float)iVar1;
            return iVar3;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 7);
      iVar1 = iVar1 + 0xc;
    } while (iVar1 <= in_ECX[0x49]);
  }
  *param_3 = 0.0;
  return -1;
}

