// rea decompile_all
// name: FUN_00590bf0
// address: 0x590bf0
// body: available
// range: 0x590bf0-0x59277b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00590bf0(short param_1,byte *param_2,undefined1 param_3,short *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  byte *local_14;
  short local_10;
  int local_c;
  
  local_c = 0;
  if (param_4 != (short *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    if ((param_2 != (byte *)0x0) || (param_1 == -1)) {
      if (*(int *)(in_ECX + 0x48) < 0x10) {
        local_c = FUN_00590960(*(undefined2 *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x2c),0,1);
      }
      else if (*(int *)(in_ECX + 0x48) == 0x10) {
        local_c = FUN_00590a10(*(undefined4 *)(in_ECX + 0x2c),1,1);
      }
      if (local_c == 0x1e) {
        return 0x1e;
      }
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28 +
                         *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)) + 4))();
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  if (param_1 == 0) {
    local_c = 0;
  }
  else if (param_2 == (byte *)0x0) {
    local_c = 6;
  }
  else {
    local_14 = param_2;
    local_10 = param_1;
    bVar2 = false;
    do {
      if ((local_10 == 0) || (bVar2)) break;
      if ((*local_14 & 0x80) == 0) {
        switch(*(byte *)(in_ECX + 0x4c) & 0xf0) {
        case 0x80:
          if (*(int *)(in_ECX + 0x28) != 0) {
            FUN_00590ac0(1);
          }
          if (2 < *(byte *)(in_ECX + 0x4d)) {
            *(undefined1 *)(in_ECX + 0x4d) = 1;
          }
          cVar1 = *(char *)(in_ECX + 0x4d);
          *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
          if (cVar1 == '\x01') {
            *(byte *)(in_ECX + 0x4e) = *local_14;
          }
          else if (cVar1 == '\x02') {
            iVar3 = FUN_00547c60(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
            if (iVar3 == 0) {
              local_c = 0x16;
            }
            else {
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x14))
                        (2);
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0xc))
                        (*(byte *)(in_ECX + 0x4e) + 0xff00);
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x28))
                        (*local_14);
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x3c))
                        (*(undefined1 *)(in_ECX + 0x4e));
              local_c = FUN_00590960(*(byte *)(in_ECX + 0x4c) & 0xf,iVar3,0,param_3);
              if (local_c == 0x1e) {
                *(int *)(in_ECX + 0x2c) = iVar3;
                (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x2c) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                *(uint *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x4c) & 0xf;
              }
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 8)) + 4))();
            }
          }
          break;
        case 0x90:
          if (*(int *)(in_ECX + 0x28) != 0) {
            FUN_00590ac0(1);
          }
          if (2 < *(byte *)(in_ECX + 0x4d)) {
            *(undefined1 *)(in_ECX + 0x4d) = 1;
          }
          cVar1 = *(char *)(in_ECX + 0x4d);
          *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
          if (cVar1 == '\x01') {
            *(byte *)(in_ECX + 0x4e) = *local_14;
          }
          else if (cVar1 == '\x02') {
            iVar3 = FUN_00547c60(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
            if (iVar3 == 0) {
              local_c = 0x16;
            }
            else {
              if (*local_14 == 0) {
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x14
                            ))(2);
                *(ushort *)(iVar3 + 0x78) = *(ushort *)(iVar3 + 0x78) | 0x8000;
              }
              else {
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x14
                            ))(0x10);
              }
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0xc))
                        (*(byte *)(in_ECX + 0x4e) + 0xff00);
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x28))
                        (*local_14);
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x3c))
                        (*(undefined1 *)(in_ECX + 0x4e));
              local_c = FUN_00590960(*(byte *)(in_ECX + 0x4c) & 0xf,iVar3,0,param_3);
              if (local_c == 0x1e) {
                *(int *)(in_ECX + 0x2c) = iVar3;
                (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x2c) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                *(uint *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x4c) & 0xf;
              }
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 8)) + 4))();
            }
          }
          break;
        case 0xa0:
          if (*(int *)(in_ECX + 0x28) != 0) {
            FUN_00590ac0(1);
          }
          if (2 < *(byte *)(in_ECX + 0x4d)) {
            *(undefined1 *)(in_ECX + 0x4d) = 1;
          }
          cVar1 = *(char *)(in_ECX + 0x4d);
          *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
          if (cVar1 == '\x01') {
            *(byte *)(in_ECX + 0x4e) = *local_14;
          }
          else if (cVar1 == '\x02') {
            piVar4 = (int *)FUN_005493b0(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
            if (piVar4 == (int *)0x0) {
              local_c = 0x16;
            }
            else {
              (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 0x10) + 0x28) + 0x68))(0x80)
              ;
              (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 0x10) + 0x28) + 0xc))
                        (*(byte *)(in_ECX + 0x4e) + 0xff00);
              (**(code **)(*piVar4 + 0x1c))((uint)*local_14 << 9);
              local_c = FUN_00590960(*(byte *)(in_ECX + 0x4c) & 0xf,piVar4,0,param_3);
              if (local_c == 0x1e) {
                *(int **)(in_ECX + 0x2c) = piVar4;
                (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x2c) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                *(uint *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x4c) & 0xf;
              }
              (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 8) + 0x28) + 4))();
            }
          }
          break;
        case 0xb0:
          if (*(int *)(in_ECX + 0x28) != 0) {
            FUN_00590ac0(1);
          }
          if (2 < *(byte *)(in_ECX + 0x4d)) {
            *(undefined1 *)(in_ECX + 0x4d) = 1;
          }
          cVar1 = *(char *)(in_ECX + 0x4d);
          *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
          if (cVar1 == '\x01') {
            *(byte *)(in_ECX + 0x4e) = *local_14;
          }
          else if (cVar1 == '\x02') {
            if ((((*(char *)(in_ECX + 0x4e) == '\0') || (*(char *)(in_ECX + 0x4e) == ' ')) ||
                (*(char *)(in_ECX + 0x4e) == 'A')) ||
               ((*(char *)(in_ECX + 0x4e) == 'D' || (0x77 < *(byte *)(in_ECX + 0x4e))))) {
              iVar3 = FUN_0054a530(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
              if (iVar3 == 0) {
                local_c = 0x16;
              }
              else {
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x60
                            ))(0);
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x70
                            ))(*(undefined1 *)(in_ECX + 0x4e));
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x78
                            ))(*local_14);
                local_c = FUN_00590960(*(byte *)(in_ECX + 0x4c) & 0xf,iVar3,0,param_3);
                if (local_c == 0x1e) {
                  *(int *)(in_ECX + 0x2c) = iVar3;
                  (*(code *)**(undefined4 **)
                              (*(int *)(in_ECX + 0x2c) + 0x28 +
                              *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                  *(uint *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x4c) & 0xf;
                }
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 8)) + 4))();
              }
            }
            else {
              piVar4 = (int *)FUN_005493b0(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
              if (piVar4 == (int *)0x0) {
                local_c = 0x16;
              }
              else {
                (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 0x10) + 0x28) + 0x58))(0);
                (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 0x10) + 0x28) + 0x68))
                          (*(undefined1 *)(in_ECX + 0x4e));
                (**(code **)(*piVar4 + 0x1c))((uint)*local_14 << 9);
                local_c = FUN_00590960(*(byte *)(in_ECX + 0x4c) & 0xf,piVar4,0,param_3);
                if (local_c == 0x1e) {
                  *(int **)(in_ECX + 0x2c) = piVar4;
                  (*(code *)**(undefined4 **)
                              (*(int *)(in_ECX + 0x2c) + 0x28 +
                              *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                  *(uint *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x4c) & 0xf;
                }
                (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 8) + 0x28) + 4))();
              }
            }
          }
          break;
        case 0xc0:
          if (*(int *)(in_ECX + 0x28) != 0) {
            FUN_00590ac0(1);
          }
          if (1 < *(byte *)(in_ECX + 0x4d)) {
            *(undefined1 *)(in_ECX + 0x4d) = 1;
          }
          cVar1 = *(char *)(in_ECX + 0x4d);
          *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
          if (cVar1 == '\x01') {
            iVar3 = FUN_0054a530(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
            if (iVar3 == 0) {
              local_c = 0x16;
            }
            else {
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x70))
                        (0x160);
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x78))
                        (*local_14);
              local_c = FUN_00590960(*(byte *)(in_ECX + 0x4c) & 0xf,iVar3,0,param_3);
              if (local_c == 0x1e) {
                *(int *)(in_ECX + 0x2c) = iVar3;
                (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x2c) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                *(uint *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x4c) & 0xf;
              }
              (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 8)) + 4))();
            }
          }
          break;
        case 0xd0:
          if (*(int *)(in_ECX + 0x28) != 0) {
            FUN_00590ac0(1);
          }
          if (1 < *(byte *)(in_ECX + 0x4d)) {
            *(undefined1 *)(in_ECX + 0x4d) = 1;
          }
          cVar1 = *(char *)(in_ECX + 0x4d);
          *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
          if (cVar1 == '\x01') {
            piVar4 = (int *)FUN_005493b0(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
            if (piVar4 == (int *)0x0) {
              local_c = 0x16;
            }
            else {
              (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 0x10) + 0x28) + 0x68))(0x80)
              ;
              (**(code **)(*piVar4 + 0x1c))((uint)*local_14 << 9);
              local_c = FUN_00590960(*(byte *)(in_ECX + 0x4c) & 0xf,piVar4,0,param_3);
              if (local_c == 0x1e) {
                *(int **)(in_ECX + 0x2c) = piVar4;
                (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x2c) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                *(uint *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x4c) & 0xf;
              }
              (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 8) + 0x28) + 4))();
            }
          }
          break;
        case 0xe0:
          if (*(int *)(in_ECX + 0x28) != 0) {
            FUN_00590ac0(1);
          }
          if (2 < *(byte *)(in_ECX + 0x4d)) {
            *(undefined1 *)(in_ECX + 0x4d) = 1;
          }
          cVar1 = *(char *)(in_ECX + 0x4d);
          *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
          if (cVar1 == '\x01') {
            *(byte *)(in_ECX + 0x4e) = *local_14;
          }
          else if (cVar1 == '\x02') {
            piVar4 = (int *)FUN_005493b0(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
            if (piVar4 == (int *)0x0) {
              local_c = 0x16;
            }
            else {
              (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 0x10) + 0x28) + 0x68))(0x81)
              ;
              (**(code **)(*piVar4 + 0x1c))
                        ((uint)*local_14 * 0x200 + (uint)*(byte *)(in_ECX + 0x4e) * 4);
              local_c = FUN_00590960(*(byte *)(in_ECX + 0x4c) & 0xf,piVar4,0,param_3);
              if (local_c == 0x1e) {
                *(int **)(in_ECX + 0x2c) = piVar4;
                (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x2c) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                *(uint *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x4c) & 0xf;
              }
              (**(code **)(*(int *)((int)piVar4 + *(int *)(piVar4[10] + 8) + 0x28) + 4))();
            }
          }
          break;
        default:
          switch(*(undefined1 *)(in_ECX + 0x4c)) {
          case 0xf0:
            if (*(int *)(in_ECX + 0x28) == 0) {
              uVar5 = FUN_0054c210(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
              *(undefined4 *)(in_ECX + 0x28) = uVar5;
            }
            if (*(int *)(in_ECX + 0x28) != 0) {
              *(byte *)(*(int *)(in_ECX + 0x28) + 0x7a +
                       (uint)*(byte *)(*(int *)(in_ECX + 0x28) + 0x79)) = *local_14;
              *(char *)(*(int *)(in_ECX + 0x28) + 0x79) =
                   *(char *)(*(int *)(in_ECX + 0x28) + 0x79) + '\x01';
              if (*(char *)(*(int *)(in_ECX + 0x28) + 0x79) == -0x80) {
                local_c = FUN_00590ac0(0);
                bVar2 = true;
              }
              else {
                uVar5 = FUN_0052e6e0();
                *(undefined4 *)(in_ECX + 0x60) = uVar5;
              }
            }
            break;
          case 0xf1:
            if (1 < *(byte *)(in_ECX + 0x4d)) {
              *(undefined1 *)(in_ECX + 0x4d) = 1;
            }
            cVar1 = *(char *)(in_ECX + 0x4d);
            *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
            if (cVar1 == '\x01') {
              iVar3 = FUN_0054a530(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
              if (iVar3 == 0) {
                local_c = 0x16;
              }
              else {
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x70
                            ))(0x209);
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x78
                            ))(*local_14);
                local_c = FUN_00590a10(iVar3,0,param_3);
                if (local_c == 0x1e) {
                  *(int *)(in_ECX + 0x2c) = iVar3;
                  (*(code *)**(undefined4 **)
                              (*(int *)(in_ECX + 0x2c) + 0x28 +
                              *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                  *(undefined4 *)(in_ECX + 0x48) = 0x10;
                }
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 8)) + 4))();
              }
            }
            break;
          case 0xf2:
            if (2 < *(byte *)(in_ECX + 0x4d)) {
              *(undefined1 *)(in_ECX + 0x4d) = 1;
            }
            cVar1 = *(char *)(in_ECX + 0x4d);
            *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
            if (cVar1 == '\x01') {
              *(byte *)(in_ECX + 0x4e) = *local_14;
            }
            else if (cVar1 == '\x02') {
              (**(code **)(**(int **)(in_ECX + 0x1c) + 0x40))
                        (0,(uint)*local_14 * 0x200 + (uint)*(byte *)(in_ECX + 0x4e) * 4);
            }
            break;
          case 0xf3:
            if (1 < *(byte *)(in_ECX + 0x4d)) {
              *(undefined1 *)(in_ECX + 0x4d) = 1;
            }
            cVar1 = *(char *)(in_ECX + 0x4d);
            *(char *)(in_ECX + 0x4d) = *(char *)(in_ECX + 0x4d) + '\x01';
            if (cVar1 == '\x01') {
              iVar3 = FUN_0054a530(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
              if (iVar3 == 0) {
                local_c = 0x16;
              }
              else {
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x70
                            ))(0x20b);
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x78
                            ))(*local_14);
                local_c = FUN_00590a10(iVar3,0,param_3);
                if (local_c == 0x1e) {
                  *(int *)(in_ECX + 0x2c) = iVar3;
                  (*(code *)**(undefined4 **)
                              (*(int *)(in_ECX + 0x2c) + 0x28 +
                              *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
                  *(undefined4 *)(in_ECX + 0x48) = 0x10;
                }
                (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 8)) + 4))();
              }
            }
          }
        }
      }
      else {
        switch(*local_14) {
        case 0xf0:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          if (*(int *)(in_ECX + 0x28) != 0) {
            FUN_00590ac0(1);
          }
          uVar5 = FUN_0054c210(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
          *(undefined4 *)(in_ECX + 0x28) = uVar5;
          if (*(int *)(in_ECX + 0x28) == 0) {
            local_c = 0x16;
          }
          else {
            *(byte *)(*(int *)(in_ECX + 0x28) + 0x7a +
                     (uint)*(byte *)(*(int *)(in_ECX + 0x28) + 0x79)) = *local_14;
            *(char *)(*(int *)(in_ECX + 0x28) + 0x79) =
                 *(char *)(*(int *)(in_ECX + 0x28) + 0x79) + '\x01';
            uVar5 = FUN_0052e6e0();
            *(undefined4 *)(in_ECX + 0x60) = uVar5;
            *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(in_ECX + 0x60);
            (**(code **)**(undefined4 **)(in_ECX + 0x24))(2,0);
          }
          break;
        case 0xf1:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          break;
        case 0xf2:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          break;
        case 0xf3:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          break;
        case 0xf4:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          break;
        case 0xf5:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          break;
        case 0xf6:
          iVar3 = FUN_0054a530(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
          if (iVar3 == 0) {
            local_c = 0x16;
          }
          else {
            (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x70))
                      (0x20e);
            (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 0x10)) + 0x78))
                      (0);
            local_c = FUN_00590a10(iVar3,0,param_3);
            if (local_c == 0x1e) {
              *(int *)(in_ECX + 0x2c) = iVar3;
              (*(code *)**(undefined4 **)
                          (*(int *)(in_ECX + 0x2c) + 0x28 +
                          *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
              *(undefined4 *)(in_ECX + 0x48) = 0x10;
            }
            (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 8)) + 4))();
          }
          break;
        case 0xf7:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          if (*(int *)(in_ECX + 0x28) == 0) {
            uVar5 = FUN_0054c210(**(undefined4 **)(*(int *)(in_ECX + 0x18) + 0x88));
            *(undefined4 *)(in_ECX + 0x28) = uVar5;
          }
          if (*(int *)(in_ECX + 0x28) != 0) {
            *(byte *)(*(int *)(in_ECX + 0x28) + 0x7a +
                     (uint)*(byte *)(*(int *)(in_ECX + 0x28) + 0x79)) = *local_14;
            *(char *)(*(int *)(in_ECX + 0x28) + 0x79) =
                 *(char *)(*(int *)(in_ECX + 0x28) + 0x79) + '\x01';
            *(undefined1 *)(*(int *)(in_ECX + 0x28) + 0x78) = 1;
            local_c = FUN_00590ac0(0);
          }
          break;
        case 0xf8:
          if (*(char *)(in_ECX + 0x4f) != '\0') {
            (**(code **)(**(int **)(in_ECX + 0x1c) + 0x20))(0xffff);
          }
          break;
        case 0xf9:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          break;
        case 0xfa:
          (**(code **)(**(int **)(in_ECX + 0x1c) + 0x2c))(0);
          break;
        case 0xfb:
          (**(code **)(**(int **)(in_ECX + 0x1c) + 0x34))(0);
          break;
        case 0xfc:
          (**(code **)(**(int **)(in_ECX + 0x1c) + 0x30))(0);
          break;
        case 0xfd:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
          break;
        case 0xfe:
          uVar5 = FUN_0052e6e0();
          *(undefined4 *)(in_ECX + 0x58) = uVar5;
          break;
        case 0xff:
          break;
        default:
          *(byte *)(in_ECX + 0x4c) = *local_14;
          *(undefined1 *)(in_ECX + 0x4d) = 1;
        }
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + -1;
    } while (local_c != 0x1e);
    if (param_4 != (short *)0x0) {
      *param_4 = param_1 - local_10;
    }
    if (*(int *)(in_ECX + 0x58) != 0) {
      uVar5 = FUN_0052e6e0();
      *(undefined4 *)(in_ECX + 0x58) = uVar5;
    }
  }
  return local_c;
}

