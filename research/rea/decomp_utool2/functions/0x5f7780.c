// rea decompile_all
// name: FUN_005f7780
// address: 0x5f7780
// body: available
// range: 0x5f7780-0x5f7d34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7780(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  uint uVar5;
  undefined2 *puVar6;
  int *in_EDX;
  uint uVar7;
  
  puVar4 = (undefined4 *)*in_ECX;
  uVar5 = param_3 * 100 + param_1;
  if (uVar5 < 0x192) {
    if (uVar5 == 0x191) {
      uVar5 = 0;
      if (param_2 == 0) {
        return;
      }
      do {
        iVar1 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *puVar4 = *(undefined4 *)(*in_EDX + iVar1);
        puVar4 = puVar4 + 1;
      } while (uVar5 < param_2);
      return;
    }
    switch(uVar5) {
    case 0x65:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined1 *)puVar4 = *(undefined1 *)(*in_EDX + iVar1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0x66:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *(undefined1 *)puVar4 = *(undefined1 *)(*in_EDX + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)(in_EDX[1] + iVar1);
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        } while (uVar5 < param_2);
        return;
      }
      break;
    default:
code_r0x005f7c5f:
      switch(param_3) {
      case 1:
        uVar5 = 0;
        if (param_2 != 0) {
          do {
            uVar7 = 0;
            if (param_1 != 0) {
              do {
                piVar2 = in_EDX + uVar7;
                uVar7 = uVar7 + 1;
                *(undefined1 *)puVar4 = *(undefined1 *)(*piVar2 + uVar5 * 4);
                puVar4 = (undefined4 *)((int)puVar4 + 1);
              } while (uVar7 < param_1);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_2);
          return;
        }
        break;
      case 2:
        uVar5 = 0;
        if (param_2 != 0) {
          do {
            uVar7 = 0;
            if (param_1 != 0) {
              do {
                piVar2 = in_EDX + uVar7;
                uVar7 = uVar7 + 1;
                *(undefined2 *)puVar4 = *(undefined2 *)(*piVar2 + uVar5 * 4);
                puVar4 = (undefined4 *)((int)puVar4 + 2);
              } while (uVar7 < param_1);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_2);
          return;
        }
        break;
      case 3:
        uVar5 = 0;
        if (param_2 != 0) {
          do {
            uVar7 = 0;
            if (param_1 != 0) {
              do {
                piVar2 = in_EDX + uVar7;
                uVar7 = uVar7 + 1;
                uVar3 = *(undefined4 *)(*piVar2 + uVar5 * 4);
                *(char *)puVar4 = (char)uVar3;
                *(char *)((int)puVar4 + 1) = (char)((uint)uVar3 >> 8);
                *(char *)((int)puVar4 + 2) = (char)((uint)uVar3 >> 0x10);
                puVar4 = (undefined4 *)((int)puVar4 + 3);
              } while (uVar7 < param_1);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_2);
          return;
        }
        break;
      case 4:
        uVar5 = 0;
        if (param_2 != 0) {
          do {
            uVar7 = 0;
            if (param_1 != 0) {
              do {
                piVar2 = in_EDX + uVar7;
                uVar7 = uVar7 + 1;
                *puVar4 = *(undefined4 *)(*piVar2 + uVar5 * 4);
                puVar4 = puVar4 + 1;
              } while (uVar7 < param_1);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_2);
        }
      }
      break;
    case 0x68:
      uVar5 = 0;
      if (param_2 != 0) {
        puVar6 = (undefined2 *)((int)puVar4 + 2);
        do {
          *(undefined1 *)(puVar6 + -1) = *(undefined1 *)(*in_EDX + uVar5 * 4);
          *(undefined1 *)((int)puVar6 + -1) = *(undefined1 *)(in_EDX[1] + uVar5 * 4);
          *(undefined1 *)puVar6 = *(undefined1 *)(in_EDX[2] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined1 *)((int)puVar6 + 1) = *(undefined1 *)(in_EDX[3] + iVar1);
          puVar6 = puVar6 + 2;
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0x6a:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *(undefined1 *)puVar4 = *(undefined1 *)(*in_EDX + uVar5 * 4);
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)(in_EDX[1] + uVar5 * 4);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)(in_EDX[2] + uVar5 * 4);
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)(in_EDX[3] + uVar5 * 4);
          *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(in_EDX[4] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined1 *)((int)puVar4 + 5) = *(undefined1 *)(in_EDX[5] + iVar1);
          puVar4 = (undefined4 *)((int)puVar4 + 6);
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0x6c:
      uVar5 = 0;
      if (param_2 != 0) {
        puVar6 = (undefined2 *)((int)puVar4 + 2);
        do {
          *(undefined1 *)(puVar6 + -1) = *(undefined1 *)(*in_EDX + uVar5 * 4);
          *(undefined1 *)((int)puVar6 + -1) = *(undefined1 *)(in_EDX[1] + uVar5 * 4);
          *(undefined1 *)puVar6 = *(undefined1 *)(in_EDX[2] + uVar5 * 4);
          *(undefined1 *)((int)puVar6 + 1) = *(undefined1 *)(in_EDX[3] + uVar5 * 4);
          *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(in_EDX[4] + uVar5 * 4);
          *(undefined1 *)((int)puVar6 + 3) = *(undefined1 *)(in_EDX[5] + uVar5 * 4);
          *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(in_EDX[6] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined1 *)((int)puVar6 + 5) = *(undefined1 *)(in_EDX[7] + iVar1);
          puVar6 = puVar6 + 4;
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0xc9:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined2 *)puVar4 = *(undefined2 *)(*in_EDX + iVar1);
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0xca:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *(undefined2 *)puVar4 = *(undefined2 *)(*in_EDX + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined2 *)((int)puVar4 + 2) = *(undefined2 *)(in_EDX[1] + iVar1);
          puVar4 = puVar4 + 1;
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0xcc:
      uVar5 = 0;
      if (param_2 != 0) {
        puVar4 = puVar4 + 1;
        do {
          *(undefined2 *)(puVar4 + -1) = *(undefined2 *)(*in_EDX + uVar5 * 4);
          *(undefined2 *)((int)puVar4 + -2) = *(undefined2 *)(in_EDX[1] + uVar5 * 4);
          *(undefined2 *)puVar4 = *(undefined2 *)(in_EDX[2] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined2 *)((int)puVar4 + 2) = *(undefined2 *)(in_EDX[3] + iVar1);
          puVar4 = puVar4 + 2;
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0xce:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *(undefined2 *)puVar4 = *(undefined2 *)(*in_EDX + uVar5 * 4);
          *(undefined2 *)((int)puVar4 + 2) = *(undefined2 *)(in_EDX[1] + uVar5 * 4);
          *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(in_EDX[2] + uVar5 * 4);
          *(undefined2 *)((int)puVar4 + 6) = *(undefined2 *)(in_EDX[3] + uVar5 * 4);
          *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(in_EDX[4] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined2 *)((int)puVar4 + 10) = *(undefined2 *)(in_EDX[5] + iVar1);
          puVar4 = puVar4 + 3;
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0xd0:
      uVar5 = 0;
      if (param_2 != 0) {
        puVar4 = puVar4 + 1;
        do {
          *(undefined2 *)(puVar4 + -1) = *(undefined2 *)(*in_EDX + uVar5 * 4);
          *(undefined2 *)((int)puVar4 + -2) = *(undefined2 *)(in_EDX[1] + uVar5 * 4);
          *(undefined2 *)puVar4 = *(undefined2 *)(in_EDX[2] + uVar5 * 4);
          *(undefined2 *)((int)puVar4 + 2) = *(undefined2 *)(in_EDX[3] + uVar5 * 4);
          *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(in_EDX[4] + uVar5 * 4);
          *(undefined2 *)((int)puVar4 + 6) = *(undefined2 *)(in_EDX[5] + uVar5 * 4);
          *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(in_EDX[6] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined2 *)((int)puVar4 + 10) = *(undefined2 *)(in_EDX[7] + iVar1);
          puVar4 = puVar4 + 4;
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0x12d:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          uVar3 = *(undefined4 *)(*in_EDX + uVar5 * 4);
          uVar5 = uVar5 + 1;
          *(char *)puVar4 = (char)uVar3;
          *(char *)((int)puVar4 + 1) = (char)((uint)uVar3 >> 8);
          *(char *)((int)puVar4 + 2) = (char)((uint)uVar3 >> 0x10);
          puVar4 = (undefined4 *)((int)puVar4 + 3);
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0x12e:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          uVar3 = *(undefined4 *)(*in_EDX + uVar5 * 4);
          *(char *)puVar4 = (char)uVar3;
          *(char *)((int)puVar4 + 1) = (char)((uint)uVar3 >> 8);
          *(char *)((int)puVar4 + 2) = (char)((uint)uVar3 >> 0x10);
          uVar3 = *(undefined4 *)(in_EDX[1] + uVar5 * 4);
          uVar5 = uVar5 + 1;
          *(char *)((int)puVar4 + 3) = (char)uVar3;
          *(char *)(puVar4 + 1) = (char)((uint)uVar3 >> 8);
          *(char *)((int)puVar4 + 5) = (char)((uint)uVar3 >> 0x10);
          puVar4 = (undefined4 *)((int)puVar4 + 6);
        } while (uVar5 < param_2);
        return;
      }
    }
  }
  else {
    switch(uVar5) {
    case 0x192:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *puVar4 = *(undefined4 *)(*in_EDX + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          puVar4[1] = *(undefined4 *)(in_EDX[1] + iVar1);
          puVar4 = puVar4 + 2;
        } while (uVar5 < param_2);
        return;
      }
      break;
    default:
      goto code_r0x005f7c5f;
    case 0x194:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *puVar4 = *(undefined4 *)(*in_EDX + uVar5 * 4);
          puVar4[1] = *(undefined4 *)(in_EDX[1] + uVar5 * 4);
          puVar4[2] = *(undefined4 *)(in_EDX[2] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          puVar4[3] = *(undefined4 *)(in_EDX[3] + iVar1);
          puVar4 = puVar4 + 4;
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0x196:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *puVar4 = *(undefined4 *)(*in_EDX + uVar5 * 4);
          puVar4[1] = *(undefined4 *)(in_EDX[1] + uVar5 * 4);
          puVar4[2] = *(undefined4 *)(in_EDX[2] + uVar5 * 4);
          puVar4[3] = *(undefined4 *)(in_EDX[3] + uVar5 * 4);
          puVar4[4] = *(undefined4 *)(in_EDX[4] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          puVar4[5] = *(undefined4 *)(in_EDX[5] + iVar1);
          puVar4 = puVar4 + 6;
        } while (uVar5 < param_2);
        return;
      }
      break;
    case 0x198:
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *puVar4 = *(undefined4 *)(*in_EDX + uVar5 * 4);
          puVar4[1] = *(undefined4 *)(in_EDX[1] + uVar5 * 4);
          puVar4[2] = *(undefined4 *)(in_EDX[2] + uVar5 * 4);
          puVar4[3] = *(undefined4 *)(in_EDX[3] + uVar5 * 4);
          puVar4[4] = *(undefined4 *)(in_EDX[4] + uVar5 * 4);
          puVar4[5] = *(undefined4 *)(in_EDX[5] + uVar5 * 4);
          puVar4[6] = *(undefined4 *)(in_EDX[6] + uVar5 * 4);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          puVar4[7] = *(undefined4 *)(in_EDX[7] + iVar1);
          puVar4 = puVar4 + 8;
        } while (uVar5 < param_2);
        return;
      }
    }
  }
  return;
}

