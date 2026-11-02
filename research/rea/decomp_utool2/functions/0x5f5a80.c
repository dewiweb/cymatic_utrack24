// rea decompile_all
// name: FUN_005f5a80
// address: 0x5f5a80
// body: available
// range: 0x5f5a80-0x5f5c89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f5a80(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_ECX;
  uint *in_EDX;
  
  if (7 < param_1) {
    param_1 = param_1 - 8;
    iVar3 = FUN_00439530();
    if (iVar3 == 0) {
      return 0;
    }
    uVar4 = *in_EDX;
    if (uVar4 == 0) {
      in_EDX[1] = 0;
    }
    else {
      if (param_1 < uVar4) {
        *in_EDX = 0;
        in_EDX[1] = 0;
        goto LAB_005f5c2a;
      }
      uVar1 = uVar4 + 1;
      param_1 = param_1 - uVar4;
      if (uVar1 < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
        if (uVar1 != 0) {
          uVar4 = uVar1;
        }
        uVar4 = FUN_004c554b(uVar4);
      }
      in_EDX[1] = uVar4;
      if (uVar4 == 0) goto LAB_005f5aef;
      iVar3 = FUN_005fec40(*in_EDX);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined1 *)(in_EDX[1] + *in_EDX) = 0;
    }
    iVar3 = FUN_00439530();
    if (iVar3 == 0) {
      return 0;
    }
    uVar4 = in_EDX[2];
    if (uVar4 == 0) {
      in_EDX[3] = 0;
    }
    else {
      if (uVar4 < 0x20000000) {
        uVar4 = FUN_004c554b(uVar4 * 8);
      }
      else {
        uVar4 = 0;
      }
      in_EDX[3] = uVar4;
      if (uVar4 == 0) {
LAB_005f5aef:
        *(undefined4 *)*in_ECX = 8;
        return 0;
      }
      uVar4 = 0;
      if (in_EDX[2] != 0) {
        do {
          if (param_1 < 4) {
            in_EDX[2] = uVar4;
            break;
          }
          param_1 = param_1 - 4;
          iVar3 = FUN_00439530();
          if (iVar3 == 0) {
            return 0;
          }
          puVar2 = (uint *)(in_EDX[3] + uVar4 * 8);
          uVar1 = *puVar2;
          if (uVar1 == 0) {
            puVar2[1] = 0;
          }
          else {
            if (param_1 < uVar1) {
              *(undefined4 *)(in_EDX[3] + uVar4 * 8) = 0;
              *(undefined4 *)(in_EDX[3] + 4 + uVar4 * 8) = 0;
              in_EDX[2] = uVar4;
              break;
            }
            param_1 = param_1 - uVar1;
            if (uVar1 + 1 < uVar1) {
              iVar3 = 0;
            }
            else {
              iVar3 = FUN_005fe580();
            }
            *(int *)(in_EDX[3] + 4 + uVar4 * 8) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)*in_ECX = 8;
              return 0;
            }
            iVar3 = FUN_005fec40(*(undefined4 *)(in_EDX[3] + uVar4 * 8));
            if (iVar3 == 0) {
              return 0;
            }
            *(undefined1 *)(*(int *)(in_EDX[3] + 4 + uVar4 * 8) + *(int *)(in_EDX[3] + uVar4 * 8)) =
                 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < in_EDX[2]);
      }
    }
  }
LAB_005f5c2a:
  if ((param_1 != 0) && (iVar3 = FUN_005fed10(), iVar3 == 0)) {
    return 0;
  }
  return 1;
}

