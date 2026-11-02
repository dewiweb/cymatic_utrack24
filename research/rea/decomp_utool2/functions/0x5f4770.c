// rea decompile_all
// name: FUN_005f4770
// address: 0x5f4770
// body: available
// range: 0x5f4770-0x5f4966 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f4770(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int in_EDX;
  uint uVar5;
  int local_c;
  uint local_8;
  
  iVar3 = FUN_005feec0(8);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = local_8 & 1;
  uVar5 = local_8 & 0xfe;
  if (uVar4 == 0) {
    *(undefined4 *)(in_EDX * 0x124 + 0x5b0 + in_ECX[1]) = 0;
  }
  else {
    iVar3 = FUN_005feb40();
    if (iVar3 == 0) {
      return 0;
    }
    *(int *)(in_EDX * 0x124 + 0x5b0 + in_ECX[1]) = local_c + 1;
    param_1 = param_1 - *(int *)(in_EDX * 0x124 + 0x5b0 + in_ECX[1]);
  }
  local_8 = in_EDX * 0x124;
  if ((char)uVar5 < '\0') {
    if (*(int *)(in_ECX[1] + 0xe1c) == 0) {
      (**(code **)(in_ECX[1] + 0x1c))();
    }
    *(undefined4 *)*in_ECX = 2;
    return 1;
  }
  if (uVar5 == 0) {
    iVar3 = FUN_005f46d0(param_1,param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else if (uVar5 == 2) {
    iVar3 = FUN_005f40c0(param_1,param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    if (uVar5 < 0x10) {
LAB_005f4881:
      iVar3 = in_ECX[1];
      if (*(int *)(iVar3 + 0xe1c) != 0) {
        *(int *)(iVar3 + 0x17f0) = *(int *)(iVar3 + 0x17f0) + 1;
        *(undefined4 *)*in_ECX = 2;
        return 1;
      }
      (**(code **)(iVar3 + 0x1c))();
      *(undefined4 *)*in_ECX = 2;
      return 1;
    }
    if (uVar5 < 0x19) {
      iVar3 = FUN_005f44f0(param_1,uVar5 >> 1 & 7,param_1);
      if (iVar3 == 0) {
        return 0;
      }
      if (*(int *)*in_ECX == 2) {
        return 1;
      }
    }
    else {
      if (uVar5 < 0x40) goto LAB_005f4881;
      iVar3 = FUN_005f4190(param_1,(uVar5 >> 1 & 0x1f) + 1,param_1);
      if (iVar3 == 0) {
        return 0;
      }
      if (*(int *)*in_ECX == 2) {
        return 1;
      }
    }
  }
  if (uVar4 != 0) {
    uVar4 = 0;
    uVar2 = *(undefined4 *)(in_ECX[1] + 0x5b0 + local_8);
    if (*(int *)(in_ECX[1] + 0x468) != 0) {
      do {
        piVar1 = (int *)(*(int *)(in_EDX * 4 + 0x38 + in_ECX[1]) + uVar4 * 4);
        *piVar1 = *piVar1 << ((byte)uVar2 & 0x1f);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX[1] + 0x468));
    }
  }
  return 1;
}

