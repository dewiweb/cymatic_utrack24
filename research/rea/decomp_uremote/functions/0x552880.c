// rea decompile_all
// name: FUN_00552880
// address: 0x552880
// body: available
// range: 0x552880-0x552d75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00552880(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_5c;
  int local_58;
  int local_4c;
  int local_40;
  int local_3c;
  undefined1 local_2c [8];
  undefined1 local_24 [20];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3507;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xc0) == 0) {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x28) != 0x1e1005)) {
      FUN_00515830(uVar2);
      if (*(int *)(in_ECX + 0xac) == 0) {
        if (*(int *)(in_ECX + 0xb0) != 0) {
          if (in_ECX == 0) {
            local_5c = 0;
          }
          else {
            local_5c = in_ECX + 0xa4 + *(int *)(*(int *)(in_ECX + 0xa4) + 4);
          }
          (**(code **)**(undefined4 **)(in_ECX + 0xb0))
                    (local_5c,0x80,*(undefined2 *)(in_ECX + 0xb8),*(undefined1 *)(in_ECX + 0xba),
                     *(undefined2 *)(in_ECX + 0xbc),&DAT_0095c854,0,0,0);
        }
      }
      else {
        if (in_ECX == 0) {
          local_58 = 0;
        }
        else {
          local_58 = in_ECX + 0xa4 + *(int *)(*(int *)(in_ECX + 0xa4) + 4);
        }
        (**(code **)**(undefined4 **)(in_ECX + 0xac))
                  (local_58,0x80,*(undefined2 *)(in_ECX + 0xb8),*(undefined1 *)(in_ECX + 0xba),
                   *(undefined2 *)(in_ECX + 0xbc),0,&DAT_0095c854);
      }
      FUN_00515860();
    }
    else {
      FUN_005033e0(param_1 + 0x58);
      FUN_00503650(local_24);
      *(undefined2 *)(in_ECX + 0xd0) = *(undefined2 *)(param_1 + 0xc4);
      *(bool *)(in_ECX + 0xd2) = *(short *)(param_1 + 0xc6) != 0;
      if (*(int *)(in_ECX + 0xac) == 0) {
        if (*(int *)(in_ECX + 0xb0) != 0) {
          if (*(char *)(in_ECX + 0xd2) == '\0') {
            *(undefined4 *)(in_ECX + 0x10) = 0;
            uVar3 = FUN_0051ad00(*(undefined4 *)(in_ECX + 0xb4));
            *(undefined4 *)(in_ECX + 0xc0) = uVar3;
            if (*(int *)(in_ECX + 0xc0) != 0) {
              if (in_ECX == 0) {
                local_4c = 0;
              }
              else {
                local_4c = in_ECX + 0xa0;
              }
              cVar1 = FUN_0051b650(in_ECX + 0xc4,0,local_4c,0);
              if (cVar1 == '\0') {
                (**(code **)(*(int *)(*(int *)(in_ECX + 0xc0) + 0x28 +
                                     *(int *)(*(int *)(*(int *)(in_ECX + 0xc0) + 0x28) + 0xc)) + 4))
                          ();
                (**(code **)(*(int *)(*(int *)(in_ECX + 0xc0) + 0x28 +
                                     *(int *)(*(int *)(*(int *)(in_ECX + 0xc0) + 0x28) + 8)) + 4))()
                ;
                *(undefined4 *)(in_ECX + 0xc0) = 0;
              }
            }
            if (*(int *)(in_ECX + 0xc0) != 0) {
              ExceptionList = local_10;
              return 0;
            }
          }
          else {
            FUN_00515830(uVar2);
            if (in_ECX == 0) {
              local_40 = 0;
            }
            else {
              local_40 = in_ECX + 0xa4 + *(int *)(*(int *)(in_ECX + 0xa4) + 4);
            }
            FUN_00503e20(local_2c);
            local_8 = 1;
            uVar3 = FUN_00501d60("[Unreachable]");
            (**(code **)**(undefined4 **)(in_ECX + 0xb0))
                      (local_40,0x81,*(undefined2 *)(in_ECX + 0xb8),*(undefined1 *)(in_ECX + 0xba),
                       *(undefined2 *)(in_ECX + 0xbc),in_ECX + 0xc4,0,uVar3);
            local_8 = 0xffffffff;
            FUN_00501900();
            FUN_00515860();
          }
        }
      }
      else {
        FUN_005017d0();
        local_8 = 0;
        FUN_00501f30("Destination #");
        FUN_00502ce0(*(undefined2 *)(in_ECX + 0xbc));
        FUN_00515830();
        if (in_ECX == 0) {
          local_3c = 0;
        }
        else {
          local_3c = in_ECX + 0xa4 + *(int *)(*(int *)(in_ECX + 0xa4) + 4);
        }
        uVar3 = FUN_00501d60(in_ECX + 0xc4);
        (**(code **)**(undefined4 **)(in_ECX + 0xac))
                  (local_3c,0x81,*(undefined2 *)(in_ECX + 0xb8),*(undefined1 *)(in_ECX + 0xba),
                   *(undefined2 *)(in_ECX + 0xbc),uVar3);
        FUN_00515860();
        local_8 = 0xffffffff;
        FUN_00501900();
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  ExceptionList = local_10;
  return uVar3;
}

