// rea decompile_all
// name: FUN_0042ea80
// address: 0x42ea80
// body: available
// range: 0x42ea80-0x42eb52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ea80(int param_1,int param_2,char param_3)

{
  float *in_ECX;
  ushort *in_EDX;
  double dVar1;
  double dVar2;
  ushort local_10;
  
  if (param_3 == '\0') {
    while (param_2 = param_2 + -1, -1 < param_2) {
      dVar2 = (double)*in_ECX * 32767.0;
      if (-32767.0 <= dVar2) {
        dVar1 = 32767.0;
        if (dVar2 <= 32767.0) {
          dVar1 = dVar2;
        }
      }
      else {
        dVar1 = -32767.0;
      }
      in_ECX = in_ECX + 1;
      local_10 = SUB82(dVar1 + 6755399441055744.0,0);
      *in_EDX = local_10 << 8 | local_10 >> 8;
      in_EDX = (ushort *)((int)in_EDX + param_1);
    }
  }
  else {
    param_2 = param_2 + -1;
    if (-1 < param_2) {
      do {
        dVar2 = (double)*in_ECX * 32767.0;
        if (-32767.0 <= dVar2) {
          dVar1 = 32767.0;
          if (dVar2 <= 32767.0) {
            dVar1 = dVar2;
          }
        }
        else {
          dVar1 = -32767.0;
        }
        in_ECX = in_ECX + 1;
        local_10 = SUB82(dVar1 + 6755399441055744.0,0);
        *in_EDX = local_10;
        in_EDX = (ushort *)((int)in_EDX + param_1);
        param_2 = param_2 + -1;
      } while (-1 < param_2);
      return;
    }
  }
  return;
}

