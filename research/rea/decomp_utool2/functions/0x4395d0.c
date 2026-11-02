// rea decompile_all
// name: FUN_004395d0
// address: 0x4395d0
// body: available
// range: 0x4395d0-0x43965e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004395d0(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  uint in_EDX;
  
  if (in_EDX != 0) {
    if (((uint)in_ECX[2] <= in_ECX[3] + in_EDX) && (iVar1 = FUN_005fe4a0(), iVar1 == 0)) {
      return 0;
    }
    if (in_ECX[4] != 0) {
      uVar2 = 0x20 - in_ECX[4];
      if (in_EDX < uVar2) {
        uVar2 = in_EDX;
      }
      in_ECX[1] = in_ECX[1] << ((byte)uVar2 & 0x1f);
      in_EDX = in_EDX - uVar2;
      in_ECX[4] = in_ECX[4] + uVar2;
      uVar2 = in_ECX[1];
      if (in_ECX[4] != 0x20) {
        return 1;
      }
      *(uint *)(*in_ECX + in_ECX[3] * 4) =
           uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      in_ECX[3] = in_ECX[3] + 1;
      in_ECX[4] = 0;
    }
    if (0x1f < in_EDX) {
      uVar2 = in_EDX >> 5;
      do {
        in_EDX = in_EDX - 0x20;
        *(undefined4 *)(*in_ECX + in_ECX[3] * 4) = 0;
        in_ECX[3] = in_ECX[3] + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (in_EDX != 0) {
      in_ECX[1] = 0;
      in_ECX[4] = in_EDX;
    }
  }
  return 1;
}

