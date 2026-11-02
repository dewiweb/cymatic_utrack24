// rea decompile_all
// name: FUN_006af450
// address: 0x6af450
// body: available
// range: 0x6af450-0x6af560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006af450(int *param_1)

{
  int iVar1;
  int *in_EAX;
  uint uVar2;
  int in_ECX;
  double dVar3;
  double dVar4;
  
  if ((*(byte *)(in_ECX + 0x68) & 2) == 0) {
LAB_006af559:
    return (uint)in_EAX & 0xffffff00;
  }
  iVar1 = *param_1;
  if (((iVar1 == 0x10026) && ((*(byte *)(param_1 + 1) & 7) == 0)) ||
     ((iVar1 == 0x10025 && ((*(byte *)(param_1 + 1) & 7) == 0)))) {
    dVar4 = *(double *)(in_ECX + 0xb0) * -1.0;
  }
  else {
    if (((iVar1 != 0x10028) || ((*(byte *)(param_1 + 1) & 7) != 0)) &&
       ((iVar1 != 0x10027 || ((*(byte *)(param_1 + 1) & 7) != 0)))) {
      if ((iVar1 == 0x10021) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
        uVar2 = FUN_006b0280(0xffffffff,in_ECX);
        return uVar2;
      }
      if ((iVar1 == 0x10022) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
        uVar2 = FUN_006b0280(1,in_ECX);
        return uVar2;
      }
      if ((iVar1 == 0x10024) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
        uVar2 = FUN_006b0240();
        return uVar2;
      }
      in_EAX = param_1;
      if ((iVar1 == 0x10023) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
        uVar2 = FUN_006b0200();
        return uVar2;
      }
      goto LAB_006af559;
    }
    dVar4 = *(double *)(in_ECX + 0xb0);
  }
  dVar3 = *(double *)(in_ECX + 0xa0) + dVar4;
  dVar4 = *(double *)(in_ECX + 0xa8) + dVar4;
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  uVar2 = FUN_006b03b0(in_ECX,dVar3,dVar4);
  return uVar2;
}

