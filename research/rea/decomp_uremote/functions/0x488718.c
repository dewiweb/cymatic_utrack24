// rea decompile_all
// name: FUN_00488718
// address: 0x488718
// body: available
// range: 0x488718-0x488902 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00488718(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 1;
  do {
    if (param_1[0x5f] == 0) {
      if (*(char *)(param_1[0x65] + 0xc) == '\0') {
        cVar2 = FUN_00488681();
      }
      else {
        cVar2 = FUN_004885aa(param_1);
      }
      if (cVar2 == '\0') {
        return 0;
      }
    }
    iVar1 = param_1[0x5f];
    if (iVar1 < 0xd0) {
      if (iVar1 < 0xcd) {
        if (200 < iVar1) {
          if (iVar1 == 0xc9) {
            uVar4 = 1;
          }
          else {
            if (iVar1 != 0xca) {
              if (iVar1 != 0xcb) {
                if (iVar1 == 0xcc) goto LAB_004887d7;
                goto LAB_00488844;
              }
              goto LAB_004887f7;
            }
            uVar4 = 1;
          }
          goto LAB_004887bb;
        }
        if (0xc4 < iVar1) goto LAB_004887f7;
        if (iVar1 != 1) {
          if (iVar1 < 0xc0) goto LAB_00488844;
          if (iVar1 < 0xc2) {
            uVar4 = 0;
          }
          else {
            if (iVar1 != 0xc2) {
              if (iVar1 == 0xc3) goto LAB_004887f7;
              if (iVar1 == 0xc4) {
                cVar2 = FUN_00487b01();
                goto LAB_004887de;
              }
              goto LAB_00488844;
            }
            uVar4 = 0;
          }
LAB_004887bb:
          cVar2 = FUN_0048754f(uVar4);
          goto LAB_004887de;
        }
LAB_00488856:
        *(undefined4 *)(*param_1 + 0x14) = 0x5c;
        *(int *)(*param_1 + 0x18) = param_1[0x5f];
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      else {
LAB_004887f7:
        *(undefined4 *)(*param_1 + 0x14) = 0x3c;
LAB_00488800:
        *(int *)(*param_1 + 0x18) = param_1[0x5f];
        (**(code **)*param_1)(param_1);
      }
    }
    else {
      if (iVar1 < 0xdc) {
        if (iVar1 != 0xdb) {
          if (0xcf < iVar1) {
            if (iVar1 < 0xd8) goto LAB_00488856;
            if (iVar1 == 0xd8) {
              cVar2 = FUN_004874b4();
              goto LAB_004887de;
            }
            if (iVar1 == 0xd9) {
              *(undefined4 *)(*param_1 + 0x14) = 0x55;
              (**(code **)(*param_1 + 4))(param_1,1);
              uVar3 = 2;
LAB_004888dd:
              param_1[0x5f] = 0;
              return uVar3;
            }
            if (iVar1 == 0xda) {
              cVar2 = FUN_00487845();
              if (cVar2 == '\0') {
                return 0;
              }
              goto LAB_004888dd;
            }
          }
          goto LAB_00488844;
        }
        cVar2 = FUN_00487df6();
      }
      else if (iVar1 == 0xdc) {
LAB_004887d7:
        cVar2 = FUN_00488505(param_1);
      }
      else if (iVar1 == 0xdd) {
        cVar2 = FUN_00488034(param_1);
      }
      else {
        if (iVar1 < 0xe0) {
LAB_00488844:
          *(undefined4 *)(*param_1 + 0x14) = 0x44;
          goto LAB_00488800;
        }
        if (iVar1 < 0xf0) {
          cVar2 = (**(code **)(param_1[0x65] + -0x364 + iVar1 * 4))(param_1);
        }
        else {
          if (iVar1 != 0xfe) goto LAB_00488844;
          cVar2 = (**(code **)(param_1[0x65] + 0x18))(param_1);
        }
      }
LAB_004887de:
      if (cVar2 == '\0') {
        return 0;
      }
    }
    param_1[0x5f] = 0;
  } while( true );
}

