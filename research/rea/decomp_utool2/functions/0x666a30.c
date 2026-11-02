// rea decompile_all
// name: FUN_00666a30
// address: 0x666a30
// body: available
// range: 0x666a30-0x666bda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00666a30(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  iVar1 = in_ECX[0x49];
  if (iVar1 != 1) {
    if ((iVar1 < 1) || (4 < iVar1)) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x1a;
      *(int *)(*in_ECX + 0x18) = in_ECX[0x49];
      *(undefined4 *)(*in_ECX + 0x1c) = 4;
      (**(code **)*in_ECX)();
    }
    in_ECX[0x50] = 0;
    in_ECX[0x4e] = (in_ECX[7] + -1 + in_ECX[0x44] * 8) / (in_ECX[0x44] * 8);
    local_8 = 0;
    uVar2 = (in_ECX[8] + -1 + in_ECX[0x45] * 8) / (in_ECX[0x45] * 8);
    in_ECX[0x4f] = uVar2;
    if (0 < in_ECX[0x49]) {
      piVar4 = in_ECX + 0x4a;
      do {
        iVar1 = *piVar4;
        uVar2 = *(uint *)(iVar1 + 0xc);
        uVar6 = *(uint *)(iVar1 + 8);
        iVar3 = uVar2 * uVar6;
        *(uint *)(iVar1 + 0x34) = uVar6;
        *(uint *)(iVar1 + 0x38) = uVar2;
        *(int *)(iVar1 + 0x3c) = iVar3;
        *(uint *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x24) * uVar6;
        uVar5 = *(uint *)(iVar1 + 0x1c) % uVar6;
        if (uVar5 == 0) {
          uVar5 = uVar6;
        }
        *(uint *)(iVar1 + 0x44) = uVar5;
        uVar6 = *(uint *)(iVar1 + 0x20) % uVar2;
        if (uVar6 == 0) {
          uVar6 = uVar2;
        }
        *(uint *)(iVar1 + 0x48) = uVar6;
        if (10 < in_ECX[0x50] + iVar3) {
          *(undefined4 *)(*in_ECX + 0x14) = 0xd;
          (**(code **)*in_ECX)();
        }
        for (; 0 < iVar3; iVar3 = iVar3 + -1) {
          in_ECX[in_ECX[0x50] + 0x51] = local_8;
          in_ECX[0x50] = in_ECX[0x50] + 1;
        }
        uVar2 = local_8 + 1;
        piVar4 = piVar4 + 1;
        local_8 = uVar2;
      } while ((int)uVar2 < in_ECX[0x49]);
    }
    return uVar2;
  }
  iVar1 = in_ECX[0x4a];
  in_ECX[0x4e] = *(int *)(iVar1 + 0x1c);
  in_ECX[0x4f] = *(int *)(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x24);
  uVar2 = *(uint *)(iVar1 + 0x20);
  uVar6 = *(uint *)(iVar1 + 0xc);
  uVar5 = uVar2 % uVar6;
  *(undefined4 *)(iVar1 + 0x34) = 1;
  *(undefined4 *)(iVar1 + 0x38) = 1;
  *(undefined4 *)(iVar1 + 0x3c) = 1;
  if (uVar5 == 0) {
    uVar5 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x44) = 1;
  *(uint *)(iVar1 + 0x48) = uVar5;
  in_ECX[0x50] = 1;
  in_ECX[0x51] = 0;
  return uVar2 / uVar6;
}

