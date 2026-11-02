// rea decompile_all
// name: FUN_0045c47c
// address: 0x45c47c
// body: available
// range: 0x45c47c-0x45c860 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045c47c(undefined4 param_1,undefined4 param_2,int param_3,ushort param_4)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_ECX;
  undefined1 local_24 [32];
  
  if (*(int **)(in_ECX + 0x11c) == (int *)0x0) {
    return;
  }
  uVar4 = (**(code **)(**(int **)(in_ECX + 0x11c) + 8))(local_24);
  cVar3 = FUN_00503830(param_2,uVar4);
  if (cVar3 == '\0') {
    return;
  }
  uVar2 = *(ushort *)(param_3 + 4);
  uVar5 = (uint)uVar2;
  if (0xb205 < uVar5) {
    if (uVar5 < 0xb318) {
      if (uVar5 < 0xb310) {
        if (uVar5 == 0xb207) {
          *(uint *)(in_ECX + 0x2e8) = (param_4 != 0) + 1;
          goto LAB_0045c530;
        }
        if (uVar5 == 0xb300) {
          *(uint *)(in_ECX + 0x2f0) = (uint)param_4;
        }
        else if (uVar5 == 0xb301) {
          *(uint *)(in_ECX + 0x2f4) = (uint)param_4;
        }
        else {
          if (uVar5 != 0xb302) goto LAB_0045c803;
          *(uint *)(in_ECX + 0x2f8) = (uint)param_4;
        }
        *(undefined1 *)(in_ECX + 0x2ec) = 1;
      }
      else {
        *(undefined1 *)(in_ECX + 0x2ec) = 1;
        *(uint *)(in_ECX + -0x2c944 + uVar5 * 4) = (uint)param_4;
      }
LAB_0045c74b:
      *(undefined1 *)(in_ECX + 0xfb) = 1;
      *(undefined1 *)(in_ECX + 0x94) = 1;
    }
    else {
      if (0xb31f < uVar5) {
        if (uVar5 < 0xb324) {
          *(undefined1 *)(in_ECX + 0x2ec) = 1;
          *(uint *)(in_ECX + -0x2c964 + uVar5 * 4) = (uint)param_4;
          goto LAB_0045c74b;
        }
        if (0xb32f < uVar5) {
          if (uVar5 < 0xb333) {
            *(undefined1 *)(in_ECX + 0x2ec) = 1;
            *(uint *)(in_ECX + -0x2c994 + uVar5 * 4) = (uint)param_4;
            goto LAB_0045c74b;
          }
          if (uVar5 == 0xd008) {
            *(uint *)(in_ECX + 0x248) = (uint)param_4;
            *(undefined1 *)(in_ECX + 0x98) = 1;
            goto LAB_0045c853;
          }
        }
      }
LAB_0045c803:
      if ((ushort)(uVar2 + 0x2ff0) < 0x18) {
        iVar1 = (uVar5 - 0xd010) + in_ECX;
        *(bool *)(iVar1 + 0x398) = param_4 != 0;
        *(undefined1 *)(iVar1 + 0xe3) = 1;
      }
      else {
        if (0x17 < (ushort)(uVar2 + 0x2fd0)) {
          return;
        }
        iVar1 = (uVar5 - 0xd030) + in_ECX;
        *(bool *)(iVar1 + 0x3b0) = param_4 != 0;
        *(undefined1 *)(iVar1 + 0xcb) = 1;
      }
    }
    goto LAB_0045c853;
  }
  if (uVar5 == 0xb205) {
    *(uint *)(in_ECX + 0x2e0) = (uint)param_4;
    FUN_00466c04();
    FUN_00465317(in_ECX + 0x2e4);
LAB_0045c52b:
    FUN_004652d6();
  }
  else {
    if (uVar5 < 0xb105) {
      if (uVar5 == 0xb104) {
        *(uint *)(in_ECX + 0x2b4) = (uint)param_4;
        FUN_00466c04();
        FUN_00465317(in_ECX + 0x2b8);
      }
      else if (uVar5 == 0xb000) {
        *(uint *)(in_ECX + 0x290) = (uint)param_4;
        FUN_00466c04();
        FUN_00465317(in_ECX + 0x294);
        FUN_004652d6();
        FUN_0046537e(&param_4);
        FUN_00465317(in_ECX + 0x298);
      }
      else if (uVar5 == 0xb001) {
        *(uint *)(in_ECX + 0x29c) = (uint)param_4;
        FUN_00466c04();
        FUN_00465317(in_ECX + 0x2a0);
      }
      else if (uVar5 == 0xb102) {
        *(uint *)(in_ECX + 0x2a4) = (uint)param_4;
        FUN_00466c04();
        FUN_00465317(in_ECX + 0x2a8);
      }
      else {
        if (uVar5 != 0xb103) goto LAB_0045c803;
        *(uint *)(in_ECX + 0x2ac) = (uint)param_4;
        FUN_00466c04();
        FUN_00465317(in_ECX + 0x2b0);
      }
      goto LAB_0045c52b;
    }
    if (uVar5 == 0xb105) {
      *(bool *)(in_ECX + 700) = param_4 != 0;
    }
    else {
      if (uVar5 != 0xb200) {
        if (uVar5 == 0xb203) {
          *(int *)(in_ECX + 0x2d0) = (int)(short)param_4;
          FUN_00466c04();
          FUN_00465317(in_ECX + 0x2d4);
        }
        else {
          if (uVar5 != 0xb204) goto LAB_0045c803;
          *(uint *)(in_ECX + 0x2d8) = (uint)param_4;
          FUN_00466c04();
          FUN_00465317(in_ECX + 0x2dc);
        }
        goto LAB_0045c52b;
      }
      *(bool *)(in_ECX + 0x2bd) = param_4 != 0;
    }
  }
LAB_0045c530:
  *(undefined1 *)(in_ECX + 0xfb) = 1;
LAB_0045c853:
  FUN_0047433f();
  return;
}

