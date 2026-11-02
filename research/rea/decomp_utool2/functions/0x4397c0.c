// rea decompile_all
// name: FUN_004397c0
// address: 0x4397c0
// body: available
// range: 0x4397c0-0x43988a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004397c0(uint param_1)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int in_EDX;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    do {
      bVar1 = *(byte *)(local_8 + in_EDX);
      uVar4 = (uint)bVar1;
      if (((uint)in_ECX[2] <= in_ECX[3] + 8U) && (iVar2 = FUN_005fe4a0(), iVar2 == 0)) {
        return 0;
      }
      iVar2 = in_ECX[4];
      uVar3 = 0x20 - iVar2;
      if (uVar3 < 9) {
        if (iVar2 == 0) {
          in_ECX[1] = uVar4;
          in_ECX[4] = 0;
          *(uint *)(*in_ECX + in_ECX[3] * 4) = uVar4 << 0x18;
        }
        else {
          uVar5 = in_ECX[1] << ((byte)uVar3 & 0x1f);
          in_ECX[4] = 8 - uVar3;
          *(uint *)(*in_ECX + in_ECX[3] * 4) =
               uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
               (uVar5 | bVar1 >> ((byte)(8 - uVar3) & 0x1f)) << 0x18;
          in_ECX[1] = uVar4;
        }
        in_ECX[3] = in_ECX[3] + 1;
      }
      else {
        in_ECX[1] = in_ECX[1] << 8 | uVar4;
        in_ECX[4] = iVar2 + 8;
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return 1;
}

