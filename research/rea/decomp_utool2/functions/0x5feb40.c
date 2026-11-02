// rea decompile_all
// name: FUN_005feb40
// address: 0x5feb40
// body: available
// range: 0x5feb40-0x5fec3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005feb40(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *in_EDX;
  
  *in_EDX = 0;
  do {
    if ((uint)in_ECX[4] < (uint)in_ECX[2]) {
      do {
        uVar1 = *(int *)(*in_ECX + in_ECX[4] * 4) << ((byte)in_ECX[5] & 0x1f);
        if (uVar1 != 0) {
          uVar2 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar2 == 0; uVar2 = uVar2 - 1) {
            }
          }
          *in_EDX = *in_EDX + (uVar2 ^ 0x1f);
          in_ECX[5] = in_ECX[5] + (uVar2 ^ 0x1f) + 1;
          if (0x1f < (uint)in_ECX[5]) {
            FUN_005ff2e0();
            in_ECX[4] = in_ECX[4] + 1;
            in_ECX[5] = 0;
          }
          return 1;
        }
        *in_EDX = *in_EDX + (0x20 - in_ECX[5]);
        FUN_005ff2e0();
        in_ECX[4] = in_ECX[4] + 1;
        in_ECX[5] = 0;
      } while ((uint)in_ECX[4] < (uint)in_ECX[2]);
    }
    uVar1 = in_ECX[3] * 8;
    if ((uint)in_ECX[5] < uVar1) {
      iVar3 = in_ECX[5];
      uVar2 = (-1 << (0x20U - (char)uVar1 & 0x1f) & *(uint *)(*in_ECX + in_ECX[4] * 4)) <<
              ((byte)iVar3 & 0x1f);
      if (uVar2 != 0) {
        uVar1 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
          }
        }
        *in_EDX = *in_EDX + (uVar1 ^ 0x1f);
        in_ECX[5] = in_ECX[5] + (uVar1 ^ 0x1f) + 1;
        return 1;
      }
      in_ECX[5] = uVar1;
      *in_EDX = *in_EDX + (uVar1 - iVar3);
    }
    iVar3 = FUN_005ff200();
  } while (iVar3 != 0);
  return 0;
}

