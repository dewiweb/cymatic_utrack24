// rea decompile_all
// name: FUN_0051ed50
// address: 0x51ed50
// body: available
// range: 0x51ed50-0x51f6ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_0051ed50(uint *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  short *psVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int in_ECX;
  undefined1 *puVar9;
  uint local_14c;
  uint local_148;
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  cVar4 = (*(code *)**(undefined4 **)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)))();
  if (cVar4 == '\0') {
    return 0;
  }
  local_8 = *param_1 & 0xff;
  switch(local_8) {
  case 0:
    if (((short)param_1[1] != -1) &&
       (uVar2 = param_1[1],
       psVar5 = (short *)(**(code **)(*(int *)(in_ECX + -0xd8 +
                                              *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 8))
                                   (local_20), (short)uVar2 != *psVar5)) {
      return 0;
    }
    if ((*(short *)((int)param_1 + 6) != -1) &&
       (sVar1 = *(short *)((int)param_1 + 6),
       iVar7 = (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 8)
               )(local_2c), sVar1 != *(short *)(iVar7 + 2))) {
      return 0;
    }
    if ((param_1[2] != 0xffffffff) &&
       (iVar7 = (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 8
                            ))(local_38), param_1[2] != *(uint *)(iVar7 + 4))) {
      return 0;
    }
    if (((short)param_1[3] != -1) &&
       (uVar2 = param_1[3],
       iVar7 = (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 8)
               )(local_44), (short)uVar2 != *(short *)(iVar7 + 8))) {
      return 0;
    }
    break;
  case 1:
    iVar7 = (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 8))
                      (local_50);
    if (*(short *)(iVar7 + 8) != 0) {
      return 0;
    }
    break;
  case 2:
    puVar6 = param_1 + 1;
    puVar9 = local_68;
    (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 8))
              (local_5c,puVar9,puVar6);
    FUN_00503b30(puVar9);
    cVar4 = FUN_00503430(puVar6);
    if (cVar4 != '\0') {
      return 0;
    }
    break;
  case 3:
    puVar6 = param_1 + 1;
    (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 0xc))
              (local_74,puVar6);
    cVar4 = FUN_00503430(puVar6);
    if (cVar4 != '\0') {
      return 0;
    }
    break;
  default:
    return 0;
  }
  if ((param_1[0x15] != 0xffffffff) &&
     (uVar2 = param_1[0x15],
     puVar6 = (uint *)(**(code **)(*(int *)(in_ECX + -0xd8 +
                                           *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 0x28))
                                (local_78), uVar2 != (*puVar6 & 0xfff0000))) {
    return 0;
  }
  puVar6 = (uint *)(**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc))
                               + 0x28))(local_7c);
  local_c = *puVar6 & 0xf000ffff;
  if (param_1[0x13] == 0xffffffff) {
    local_148 = param_1[0x13];
  }
  else {
    local_148 = param_1[0x13] & 0xf000ffff;
  }
  local_10 = local_148;
  if (param_1[0x14] == 0xffffffff) {
    local_14c = param_1[0x14];
  }
  else {
    local_14c = param_1[0x14] & 0xf000ffff;
  }
  local_14 = local_14c;
  iVar7 = (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 8))
                    (local_88);
  if (((ushort)param_1[0x16] <= *(ushort *)(iVar7 + 8)) &&
     (iVar7 = (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 8))
                        (local_94), *(ushort *)(iVar7 + 8) <= *(ushort *)((int)param_1 + 0x5a))) {
    uVar2 = param_1[8];
    uVar3 = param_1[7];
    puVar8 = (undefined4 *)
             (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 0x10
                         ))(local_98);
    cVar4 = FUN_00507e40(*puVar8,uVar3,uVar2);
    if (cVar4 != '\0') {
      uVar2 = param_1[10];
      uVar3 = param_1[9];
      puVar8 = (undefined4 *)
               (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) +
                           0x18))(local_9c);
      cVar4 = FUN_00507e40(*puVar8,uVar3,uVar2);
      if (cVar4 != '\0') {
        uVar2 = param_1[0xc];
        uVar3 = param_1[0xb];
        puVar8 = (undefined4 *)
                 (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) +
                             0x14))(local_a0);
        cVar4 = FUN_00507e40(*puVar8,uVar3,uVar2);
        if (cVar4 != '\0') {
          uVar2 = param_1[0xe];
          uVar3 = param_1[0xd];
          puVar8 = (undefined4 *)
                   (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc))
                               + 0x1c))(local_a4);
          cVar4 = FUN_00507e40(*puVar8,uVar3,uVar2);
          if (cVar4 != '\0') {
            uVar2 = param_1[0x10];
            uVar3 = param_1[0xf];
            puVar8 = (undefined4 *)
                     (**(code **)(*(int *)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)
                                          ) + 0x24))(local_a8);
            cVar4 = FUN_00507e40(*puVar8,uVar3,uVar2);
            if (cVar4 != '\0') {
              uVar2 = param_1[0x12];
              uVar3 = param_1[0x11];
              puVar8 = (undefined4 *)
                       (**(code **)(*(int *)(in_ECX + -0xd8 +
                                            *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)) + 0x20))
                                 (local_ac);
              cVar4 = FUN_00507e40(*puVar8,uVar3,uVar2);
              if ((cVar4 != '\0') &&
                 (cVar4 = FUN_00507e40(local_c,local_10,local_14), cVar4 != '\0')) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

