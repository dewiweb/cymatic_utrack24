// rea decompile_all
// name: FUN_00644820
// address: 0x644820
// body: available
// range: 0x644820-0x6448e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_00644820(uint param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071ff7e;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  while( true ) {
    if ((param_1 < 0x80) && (0 < *(short *)((int)in_ECX + param_1 * 2 + 0x40))) {
      uVar2 = (uint)*(short *)((int)in_ECX + param_1 * 2 + 0x40);
      if ((uint)in_ECX[0xf] <= uVar2) {
        ExceptionList = local_10;
        return (uint *)0x0;
      }
      ExceptionList = local_10;
      return *(uint **)(in_ECX[0xd] + uVar2 * 4);
    }
    iVar3 = 0;
    if (0 < in_ECX[0xf]) {
      puVar4 = (undefined4 *)in_ECX[0xd];
      do {
        if (*(uint *)*puVar4 == param_1) {
          ExceptionList = local_10;
          return (uint *)*puVar4;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < in_ECX[0xf]);
    }
    if (param_2 == '\0') break;
    cVar1 = (**(code **)(*in_ECX + 0x28))(param_1,uVar2);
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return (uint *)0x0;
    }
    param_2 = '\0';
  }
  ExceptionList = local_10;
  return (uint *)0x0;
}

