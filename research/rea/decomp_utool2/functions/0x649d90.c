// rea decompile_all
// name: FUN_00649d90
// address: 0x649d90
// body: available
// range: 0x649d90-0x649eb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00649d90(int param_1)

{
  int *in_ECX;
  int iVar1;
  uint uVar2;
  byte *in_EDX;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if (*(char *)((int)in_ECX + 9) != '\b') {
    return;
  }
  if (*(char *)((int)in_ECX + 10) != '\x01') {
    return;
  }
  if (param_1 == 1) {
    iVar6 = *in_ECX;
    uVar2 = 0;
    uVar4 = 0x80;
    pbVar5 = in_EDX;
    if (iVar6 != 0) {
      do {
        if (*in_EDX != 0) {
          uVar2 = uVar2 | uVar4;
        }
        in_EDX = in_EDX + 1;
        if (uVar4 < 2) {
          *pbVar5 = (byte)uVar2;
          uVar4 = 0x80;
          pbVar5 = pbVar5 + 1;
          uVar2 = 0;
        }
        else {
          uVar4 = (int)uVar4 >> 1;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (uVar4 != 0x80) {
        *pbVar5 = (byte)uVar2;
      }
    }
    goto LAB_00649e00;
  }
  pbVar5 = in_EDX;
  if (param_1 == 2) {
    iVar6 = *in_ECX;
    uVar4 = 0;
    iVar1 = 6;
    if (iVar6 == 0) goto LAB_00649e00;
    do {
      uVar4 = uVar4 | (*in_EDX & 3) << ((byte)iVar1 & 0x1f);
      if (iVar1 == 0) {
        *pbVar5 = (byte)uVar4;
        iVar1 = 6;
        pbVar5 = pbVar5 + 1;
        uVar4 = 0;
      }
      else {
        iVar1 = iVar1 + -2;
      }
      bVar3 = (byte)uVar4;
      in_EDX = in_EDX + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    bVar7 = iVar1 == 6;
  }
  else {
    if (param_1 != 4) goto LAB_00649e00;
    iVar6 = *in_ECX;
    uVar4 = 0;
    iVar1 = 4;
    if (iVar6 == 0) goto LAB_00649e00;
    do {
      uVar4 = uVar4 | (*in_EDX & 0xf) << ((byte)iVar1 & 0x1f);
      if (iVar1 == 0) {
        *pbVar5 = (byte)uVar4;
        iVar1 = 4;
        pbVar5 = pbVar5 + 1;
        uVar4 = 0;
      }
      else {
        iVar1 = iVar1 + -4;
      }
      bVar3 = (byte)uVar4;
      in_EDX = in_EDX + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    bVar7 = iVar1 == 4;
  }
  if (!bVar7) {
    *pbVar5 = bVar3;
  }
LAB_00649e00:
  bVar3 = (char)param_1 * *(char *)((int)in_ECX + 10);
  *(char *)((int)in_ECX + 9) = (char)param_1;
  *(byte *)((int)in_ECX + 0xb) = bVar3;
  if (bVar3 < 8) {
    in_ECX[1] = (uint)bVar3 * *in_ECX + 7 >> 3;
    return;
  }
  in_ECX[1] = (uint)(bVar3 >> 3) * *in_ECX;
  return;
}

