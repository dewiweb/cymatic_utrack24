// rea decompile_all
// name: FUN_00597760
// address: 0x597760
// body: available
// range: 0x597760-0x597e5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597760(void)

{
  ushort uVar1;
  char cVar2;
  int in_ECX;
  undefined2 local_108;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa [6];
  undefined2 local_f4;
  undefined2 local_f2;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [4];
  undefined2 local_e4;
  undefined1 auStack_e2 [2];
  undefined1 auStack_e0 [191];
  undefined1 local_21;
  uint local_1c;
  char *local_18;
  undefined1 local_11;
  char *local_10;
  undefined4 local_c;
  char *local_8;
  
  local_1c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_8 = (char *)(*(int *)(in_ECX + 0xc3c) + 4);
  local_c = FUN_0052e6e0();
  if (*(char *)(in_ECX + 0xc5d) == '\0') {
    uVar1 = *(ushort *)(in_ECX + 8);
    if (uVar1 < 0x3001) {
      if (uVar1 != 0x3000) {
        if (uVar1 == 0) {
          if (*(int *)(in_ECX + 0xc58) == 0) {
            *(undefined4 *)(in_ECX + 0xc58) = 1;
            *(undefined1 *)(in_ECX + 0xc6c) = 0;
            (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(1);
          }
        }
        else if (uVar1 == 0x1000) {
          *(undefined1 *)(in_ECX + 0xc6c) = 0;
        }
        else if ((uVar1 == 0x2000) && (*(int *)(in_ECX + 0xc58) == 1)) {
          (**(code **)(**(int **)(in_ECX + 0x100) + 4))(local_8,*(undefined2 *)(in_ECX + 10));
        }
        goto LAB_00597e51;
      }
      FUN_005971a0();
      Sleep(0x32);
      if (*(int *)(in_ECX + 0x108) != 0) {
        (**(code **)(**(int **)(in_ECX + 0x108) + 4))(1);
      }
    }
    else if (uVar1 != 0x4000) {
      if (uVar1 == 0x7000) {
        FUN_00515830();
        SetEvent(*(HANDLE *)(in_ECX + 0xc0));
      }
      goto LAB_00597e51;
    }
    _memset(&local_fc,0,0xdc);
    local_108 = 1;
    local_fd = 0;
    if ((*(int *)(in_ECX + 0x108) != 0) &&
       (cVar2 = (**(code **)(**(int **)(in_ECX + 0x108) + 8))
                          (auStack_f0,auStack_e8,auStack_e2,auStack_e0,local_fa), cVar2 != '\0')) {
      local_f4 = 0x4310;
      local_f2 = 0x8041;
      local_e4 = 0xc0;
      local_21 = 0;
      local_fd = 1;
      local_108 = 0xdc;
    }
    local_fc = local_fd;
    local_fb = 0;
    FUN_00597280(0xe000,&local_fc,local_108,0);
  }
  else {
    uVar1 = *(ushort *)(in_ECX + 8);
    if (uVar1 < 0xc001) {
      if (uVar1 == 0xc000) {
        Sleep(100);
        if (*(int *)(in_ECX + 0x104) != 0) {
          (**(code **)(**(int **)(in_ECX + 0x104) + 4))(1);
        }
      }
      else if (uVar1 < 0xa001) {
        if (uVar1 == 0xa000) {
          if (*(int *)(in_ECX + 0xc58) == 1) {
            *(undefined4 *)(in_ECX + 0xc60) = local_c;
            FUN_00597280(0x1000,0,0,0);
          }
        }
        else if (uVar1 == 0x8000) {
          if (*(short *)(in_ECX + 10) == 1) {
            *(undefined4 *)(in_ECX + 0xc60) = local_c;
            local_10 = local_8;
            *(bool *)(in_ECX + 0xc5f) = *local_8 != '\0';
            local_8 = local_8 + 1;
            FUN_00597280(0,0,0,0);
            if (*(int *)(in_ECX + 0xc58) == 1) {
              *(undefined4 *)(in_ECX + 0xc58) = 2;
              (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(0);
              Sleep(0x32);
              *(undefined4 *)(in_ECX + 0xc58) = 1;
              (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(1);
            }
            else {
              *(undefined4 *)(in_ECX + 0xc58) = 1;
              (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(1);
            }
          }
        }
        else if (uVar1 == 0x9000) {
          *(undefined4 *)(in_ECX + 0xc60) = local_c;
          *(undefined4 *)(in_ECX + 0xc58) = 2;
          (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(0);
        }
      }
      else if ((uVar1 == 0xb000) && (*(int *)(in_ECX + 0xc58) == 1)) {
        *(undefined4 *)(in_ECX + 0xc60) = local_c;
        (**(code **)(**(int **)(in_ECX + 0x100) + 4))(local_8,*(undefined2 *)(in_ECX + 10));
      }
    }
    else if (uVar1 == 0xd000) {
      if (*(short *)(in_ECX + 10) == 1) {
        local_18 = local_8;
        local_11 = *local_8 != '\0';
        local_8 = local_8 + 1;
        if (*(int *)(in_ECX + 0x104) != 0) {
          (**(code **)(**(int **)(in_ECX + 0x104) + 0x1c))(local_11);
        }
        (**(code **)(**(int **)(in_ECX + 0x100) + 0x10))(local_11);
      }
    }
    else if (uVar1 == 0xe000) {
      if ((*(short *)(in_ECX + 10) == 0xdc) && (*local_8 != '\0')) {
        *(undefined4 *)(in_ECX + 0xc60) = local_c;
        (**(code **)(**(int **)(in_ECX + 0x100) + 8))(local_8 + 8,0xd4,local_8 + 2);
      }
    }
    else if (uVar1 == 0xf000) {
      FUN_00515830();
      SetEvent(*(HANDLE *)(in_ECX + 0xc0));
    }
  }
LAB_00597e51:
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

