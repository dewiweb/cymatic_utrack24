// rea decompile_all
// name: FUN_005feec0
// address: 0x5feec0
// body: available
// range: 0x5feec0-0x5ff018 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005feec0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  uint *in_EDX;
  
  uVar2 = (in_ECX[3] + (in_ECX[2] - in_ECX[4]) * 4) * 8 - in_ECX[5];
  while (uVar2 < param_1) {
    iVar3 = FUN_005ff200();
    if (iVar3 == 0) {
      return 0;
    }
    uVar2 = (in_ECX[3] + (in_ECX[2] - in_ECX[4]) * 4) * 8 - in_ECX[5];
  }
  uVar2 = in_ECX[4];
  cVar1 = (char)param_1;
  if (uVar2 < (uint)in_ECX[2]) {
    if (in_ECX[5] == 0) {
      uVar2 = *(uint *)(*in_ECX + uVar2 * 4);
      if (0x1f < param_1) {
        *in_EDX = uVar2;
        FUN_005ff2e0();
        in_ECX[4] = in_ECX[4] + 1;
        return 1;
      }
      *in_EDX = uVar2 >> (0x20U - cVar1 & 0x1f);
      in_ECX[5] = param_1;
      return 1;
    }
    uVar4 = 0x20 - in_ECX[5];
    uVar2 = *(uint *)(*in_ECX + uVar2 * 4);
    if (param_1 < uVar4) {
      *in_EDX = (0xffffffffU >> ((byte)in_ECX[5] & 0x1f) & uVar2) >> ((char)uVar4 - cVar1 & 0x1fU);
      in_ECX[5] = in_ECX[5] + param_1;
      return 1;
    }
    *in_EDX = 0xffffffffU >> ((byte)in_ECX[5] & 0x1f) & uVar2;
    FUN_005ff2e0();
    in_ECX[4] = in_ECX[4] + 1;
    in_ECX[5] = 0;
    iVar3 = param_1 - uVar4;
    if (iVar3 != 0) {
      *in_EDX = *in_EDX << ((byte)iVar3 & 0x1f);
      *in_EDX = *in_EDX | *(uint *)(*in_ECX + in_ECX[4] * 4) >> (0x20 - (byte)iVar3 & 0x1f);
      in_ECX[5] = iVar3;
      return 1;
    }
  }
  else {
    if (in_ECX[5] != 0) {
      *in_EDX = (*(uint *)(*in_ECX + in_ECX[4] * 4) & 0xffffffffU >> ((byte)in_ECX[5] & 0x1f)) >>
                ((' ' - (char)in_ECX[5]) - cVar1 & 0x1fU);
      in_ECX[5] = in_ECX[5] + param_1;
      return 1;
    }
    *in_EDX = *(uint *)(*in_ECX + uVar2 * 4) >> (0x20U - cVar1 & 0x1f);
    in_ECX[5] = in_ECX[5] + param_1;
  }
  return 1;
}

