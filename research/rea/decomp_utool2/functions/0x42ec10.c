// rea decompile_all
// name: FUN_0042ec10
// address: 0x42ec10
// body: available
// range: 0x42ec10-0x42ed0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ec10(int param_1,int param_2,char param_3)

{
  float *in_ECX;
  int in_EDX;
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  
  if (param_3 == '\0') {
    param_2 = param_2 + -1;
    if (-1 < param_2) {
      puVar1 = (undefined1 *)(in_EDX + 2);
      do {
        dVar3 = (double)*in_ECX * 8388607.0;
        if (-8388607.0 <= dVar3) {
          dVar2 = 8388607.0;
          if (dVar3 <= 8388607.0) {
            dVar2 = dVar3;
          }
        }
        else {
          dVar2 = -8388607.0;
        }
        dVar2 = dVar2 + 6755399441055744.0;
        in_ECX = in_ECX + 1;
        puVar1[-2] = (char)((ulonglong)dVar2 >> 0x10);
        puVar1[-1] = (char)((ulonglong)dVar2 >> 8);
        *puVar1 = SUB81(dVar2,0);
        puVar1 = puVar1 + param_1;
        param_2 = param_2 + -1;
      } while (-1 < param_2);
    }
  }
  else {
    param_2 = param_2 + -1;
    if (-1 < param_2) {
      puVar1 = (undefined1 *)(in_EDX + 2);
      do {
        dVar3 = (double)*in_ECX * 8388607.0;
        if (-8388607.0 <= dVar3) {
          dVar2 = 8388607.0;
          if (dVar3 <= 8388607.0) {
            dVar2 = dVar3;
          }
        }
        else {
          dVar2 = -8388607.0;
        }
        dVar2 = dVar2 + 6755399441055744.0;
        in_ECX = in_ECX + 1;
        puVar1[-2] = SUB81(dVar2,0);
        puVar1[-1] = (char)((ulonglong)dVar2 >> 8);
        *puVar1 = (char)((ulonglong)dVar2 >> 0x10);
        puVar1 = puVar1 + param_1;
        param_2 = param_2 + -1;
      } while (-1 < param_2);
      return;
    }
  }
  return;
}

