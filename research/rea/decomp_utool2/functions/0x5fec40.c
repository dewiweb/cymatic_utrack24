// rea decompile_all
// name: FUN_005fec40
// address: 0x5fec40
// body: available
// range: 0x5fec40-0x5fed07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005fec40(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined1 *in_EDX;
  uint uVar4;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    while (uVar4 = uVar1, in_ECX[5] != 0) {
      iVar3 = FUN_005feec0(8);
      if (iVar3 == 0) {
        return 0;
      }
      *in_EDX = (undefined1)param_1;
      in_EDX = in_EDX + 1;
      uVar1 = uVar4 - 1;
      if (uVar4 - 1 == 0) {
        return uVar4;
      }
    }
    if (uVar4 != 0) {
      do {
        while( true ) {
          if (uVar4 < 4) {
            while( true ) {
              if (uVar4 == 0) {
                return 1;
              }
              iVar3 = FUN_005feec0(8);
              if (iVar3 == 0) break;
              *in_EDX = (undefined1)param_1;
              in_EDX = in_EDX + 1;
              uVar4 = uVar4 - 1;
            }
            return 0;
          }
          uVar1 = in_ECX[4];
          if ((uint)in_ECX[2] <= uVar1) break;
          uVar2 = *(undefined4 *)(*in_ECX + uVar1 * 4);
          in_ECX[4] = uVar1 + 1;
          *in_EDX = (char)((uint)uVar2 >> 0x18);
          in_EDX[1] = (char)((uint)uVar2 >> 0x10);
          in_EDX[2] = (char)((uint)uVar2 >> 8);
          in_EDX[3] = (char)uVar2;
          in_EDX = in_EDX + 4;
          uVar4 = uVar4 - 4;
        }
        iVar3 = FUN_005ff200();
      } while (iVar3 != 0);
      return 0;
    }
  }
  return 1;
}

