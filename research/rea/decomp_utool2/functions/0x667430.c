// rea decompile_all
// name: FUN_00667430
// address: 0x667430
// body: available
// range: 0x667430-0x667547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00667430(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  uint in_EDX;
  int iVar5;
  byte *pbVar6;
  int local_c;
  uint local_8;
  
  piVar1 = (int *)in_ECX[4];
  pbVar6 = (byte *)*in_ECX;
  iVar5 = in_ECX[1];
  local_c = param_1;
  local_8 = in_EDX;
  if (piVar1[0x5f] == 0) {
    for (; iVar4 = local_c, local_c < 0x19; local_c = local_c + 8) {
      if (iVar5 == 0) {
        cVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
        if (cVar2 == '\0') {
          return 0;
        }
        pbVar6 = *(byte **)piVar1[6];
        iVar5 = ((undefined4 *)piVar1[6])[1];
      }
      uVar3 = (uint)*pbVar6;
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar6 + 1;
      if (uVar3 == 0xff) {
        do {
          if (iVar5 == 0) {
            cVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
            if (cVar2 == '\0') {
              return 0;
            }
            pbVar6 = *(byte **)piVar1[6];
            iVar5 = ((undefined4 *)piVar1[6])[1];
          }
          uVar3 = (uint)*pbVar6;
          iVar5 = iVar5 + -1;
          pbVar6 = pbVar6 + 1;
        } while (uVar3 == 0xff);
        if (uVar3 != 0) {
          piVar1[0x5f] = uVar3;
          goto LAB_006674ee;
        }
        uVar3 = 0xff;
      }
      local_8 = local_8 << 8 | uVar3;
    }
  }
  else {
LAB_006674ee:
    iVar4 = local_c;
    if (local_c < param_2) {
      if (*(char *)(piVar1[0x66] + 8) == '\0') {
        *(undefined4 *)(*piVar1 + 0x14) = 0x75;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        *(undefined1 *)(piVar1[0x66] + 8) = 1;
      }
      iVar4 = 0x19;
      local_8 = local_8 << (0x19U - (char)local_c & 0x1f);
    }
  }
  *in_ECX = pbVar6;
  in_ECX[1] = iVar5;
  in_ECX[3] = iVar4;
  in_ECX[2] = local_8;
  return 1;
}

