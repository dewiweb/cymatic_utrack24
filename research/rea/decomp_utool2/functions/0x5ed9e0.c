// rea decompile_all
// name: FUN_005ed9e0
// address: 0x5ed9e0
// body: available
// range: 0x5ed9e0-0x5edfc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ed9e0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar3 = FUN_00439660(1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00439660(7);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00439660(0x18);
  if (iVar3 == 0) {
    return 0;
  }
  switch(*in_ECX) {
  case 0:
    iVar3 = FUN_00439660(0x10);
    if ((((iVar3 != 0) && (iVar3 = FUN_00439660(0x10), iVar3 != 0)) &&
        (iVar3 = FUN_00439660(0x18), iVar3 != 0)) &&
       (((iVar3 = FUN_00439660(0x18), iVar3 != 0 && (iVar3 = FUN_00439660(0x14), iVar3 != 0)) &&
        (((iVar3 = FUN_00439660(3), iVar3 != 0 &&
          ((iVar3 = FUN_00439660(5), iVar3 != 0 &&
           (iVar3 = FUN_00439710(in_ECX[0xc],in_ECX[0xd]), iVar3 != 0)))) &&
         (iVar3 = FUN_004397c0(0x10), iVar3 != 0)))))) {
      return 1;
    }
    break;
  case 1:
    iVar3 = FUN_004395d0();
    if (iVar3 != 0) {
      return 1;
    }
    return 0;
  case 2:
    iVar3 = FUN_004397c0(4);
    if (iVar3 != 0) {
      iVar3 = FUN_004397c0(in_ECX[2] + -4);
      if (iVar3 != 0) {
        return 1;
      }
      return 0;
    }
    break;
  case 3:
    local_8 = 0;
    if (in_ECX[4] == 0) {
      return 1;
    }
    iVar3 = 0;
    do {
      iVar4 = FUN_00439710(*(undefined4 *)(iVar3 + in_ECX[5]),*(undefined4 *)(iVar3 + 4 + in_ECX[5])
                          );
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_00439710(*(undefined4 *)(iVar3 + 8 + in_ECX[5]),
                           *(undefined4 *)(iVar3 + 0xc + in_ECX[5]));
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_00439660(0x10);
      if (iVar4 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 0x18;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)in_ECX[4]);
    return 1;
  case 4:
    iVar3 = FUN_00439750();
    if (((iVar3 != 0) && (iVar3 = FUN_004397c0(0x20), iVar3 != 0)) &&
       (iVar3 = FUN_00439750(), iVar3 != 0)) {
      uVar5 = 0;
      if (in_ECX[6] == 0) {
        return 1;
      }
      while ((iVar3 = FUN_00439750(), iVar3 != 0 &&
             (iVar3 = FUN_004397c0(*(undefined4 *)(in_ECX[7] + uVar5 * 8)), iVar3 != 0))) {
        uVar5 = uVar5 + 1;
        if ((uint)in_ECX[6] <= uVar5) {
          return 1;
        }
      }
    }
    break;
  case 5:
    iVar3 = FUN_004397c0(0x80);
    if (((iVar3 != 0) && (iVar3 = FUN_00439710(in_ECX[0x26],in_ECX[0x27]), iVar3 != 0)) &&
       ((iVar3 = FUN_00439660(1), iVar3 != 0 &&
        ((iVar3 = FUN_004395d0(), iVar3 != 0 && (iVar3 = FUN_00439660(8), iVar3 != 0)))))) {
      local_10 = 0;
      if (in_ECX[0x29] == 0) {
        return 1;
      }
      local_14 = 0;
      while( true ) {
        puVar6 = (undefined4 *)(in_ECX[0x2a] + local_14);
        iVar3 = FUN_00439710(*puVar6,puVar6[1]);
        if (((((iVar3 == 0) || (iVar3 = FUN_00439660(8), iVar3 == 0)) ||
             (iVar3 = FUN_004397c0(0xc), iVar3 == 0)) ||
            ((iVar3 = FUN_00439660(1), iVar3 == 0 || (iVar3 = FUN_00439660(1), iVar3 == 0)))) ||
           ((iVar3 = FUN_004395d0(), iVar3 == 0 || (iVar3 = FUN_00439660(8), iVar3 == 0)))) break;
        local_8 = 0;
        if (*(char *)(puVar6 + 7) != '\0') {
          local_c = 0;
          do {
            iVar3 = FUN_00439710(*(undefined4 *)(puVar6[8] + local_c),
                                 ((undefined4 *)(puVar6[8] + local_c))[1]);
            if (iVar3 == 0) {
              return 0;
            }
            iVar3 = FUN_00439660(8);
            if (iVar3 == 0) {
              return 0;
            }
            iVar3 = FUN_004395d0();
            if (iVar3 == 0) {
              return 0;
            }
            local_8 = local_8 + 1;
            local_c = local_c + 0x10;
          } while (local_8 < *(byte *)(puVar6 + 7));
        }
        local_10 = local_10 + 1;
        local_14 = local_14 + 0x28;
        if ((uint)in_ECX[0x29] <= local_10) {
          return 1;
        }
      }
    }
    break;
  case 6:
    iVar3 = FUN_00439660(0x20);
    if (iVar3 != 0) {
      pcVar7 = (char *)in_ECX[5];
      pcVar1 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      iVar3 = FUN_00439660(0x20);
      if ((iVar3 != 0) && (iVar3 = FUN_004397c0((int)pcVar7 - (int)pcVar1), iVar3 != 0)) {
        pcVar7 = (char *)in_ECX[6];
        pcVar1 = pcVar7 + 1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        iVar3 = FUN_00439660(0x20);
        if ((((((iVar3 != 0) && (iVar3 = FUN_004397c0((int)pcVar7 - (int)pcVar1), iVar3 != 0)) &&
              (iVar3 = FUN_00439660(0x20), iVar3 != 0)) &&
             ((iVar3 = FUN_00439660(0x20), iVar3 != 0 && (iVar3 = FUN_00439660(0x20), iVar3 != 0))))
            && (iVar3 = FUN_00439660(0x20), iVar3 != 0)) && (iVar3 = FUN_00439660(0x20), iVar3 != 0)
           ) {
          iVar3 = FUN_004397c0(in_ECX[0xb]);
          if (iVar3 != 0) {
            return 1;
          }
          return 0;
        }
      }
    }
    break;
  default:
    iVar3 = FUN_004397c0(in_ECX[2]);
    if (iVar3 != 0) {
      return 1;
    }
    return 0;
  }
  return 0;
}

