// rea decompile_all
// name: FUN_004c72a5
// address: 0x4c72a5
// body: available
// range: 0x4c72a5-0x4c7502 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004c72a5(undefined1 *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  undefined1 *apuStack_2c [5];
  undefined1 *local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4c72b1;
  iVar2 = 0;
  local_18 = (undefined1 *)0x0;
  apuStack_2c[0] = (undefined1 *)0x4c72c0;
  FUN_004652cd();
  local_8 = 0;
  if (0 < *in_ECX) {
    if (in_ECX[2] == 0x2f) {
      apuStack_2c[0] = param_1;
      FUN_0046537e();
      goto LAB_004c74f0;
    }
    if (((uint)in_ECX[1] >> 1 & 1) != 0) {
      apuStack_2c[0] = local_14;
      thunk_FUN_00465aae();
    }
    if ((*(byte *)(in_ECX + 1) & 1) != 0) {
      apuStack_2c[0] = local_14;
      thunk_FUN_00465aae();
    }
    if (((uint)in_ECX[1] >> 2 & 1) != 0) {
      apuStack_2c[0] = local_14;
      thunk_FUN_00465aae();
    }
    apuStack_2c[0] = (undefined1 *)0x4c732b;
    iVar1 = FUN_004f8947();
    if (0 < iVar1) {
      apuStack_2c[0] = (undefined1 *)*in_ECX;
      do {
        if (apuStack_2c[0] == (undefined1 *)(&DAT_00957884)[iVar2 * 2]) {
          local_18 = (undefined1 *)apuStack_2c;
          FUN_004652e4(local_14);
          FUN_00465c6b(param_1);
          goto LAB_004c74f0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    apuStack_2c[0] = (undefined1 *)*in_ECX;
    if (((int)apuStack_2c[0] < 0x10070) || (0x1007f < (int)apuStack_2c[0])) {
      if (((int)apuStack_2c[0] < 0x10060) || (0x10069 < (int)apuStack_2c[0])) {
        if ((0x20 < (int)apuStack_2c[0]) && ((int)apuStack_2c[0] < 0xb0)) {
          FUN_00464f4f();
          apuStack_2c[0] = (undefined1 *)0x4c73d9;
          FUN_00465b3c();
          goto LAB_004c74e4;
        }
        if (apuStack_2c[0] == (undefined1 *)0x1006b) {
          apuStack_2c[0] = (undefined1 *)0x4c73eb;
          FUN_004c729f();
          apuStack_2c[0] = local_14;
          apuStack_2c[0] = (undefined1 *)thunk_FUN_00465aae();
        }
        else if (apuStack_2c[0] == (undefined1 *)0x1006d) {
          apuStack_2c[0] = (undefined1 *)0x4c740b;
          FUN_004c729f();
          apuStack_2c[0] = local_14;
          apuStack_2c[0] = (undefined1 *)thunk_FUN_00465aae();
        }
        else if (apuStack_2c[0] == (undefined1 *)0x1006a) {
          apuStack_2c[0] = (undefined1 *)0x4c7428;
          FUN_004c729f();
          apuStack_2c[0] = local_14;
          apuStack_2c[0] = (undefined1 *)thunk_FUN_00465aae();
        }
        else {
          if (apuStack_2c[0] != (undefined1 *)0x1006f) {
            if (apuStack_2c[0] == (undefined1 *)0x1006c) {
              apuStack_2c[0] = (undefined1 *)0x4c7462;
              FUN_004c729f();
              apuStack_2c[0] = local_14;
              apuStack_2c[0] = (undefined1 *)thunk_FUN_00465aae();
            }
            else {
              if (apuStack_2c[0] == (undefined1 *)0x1006e) {
                apuStack_2c[0] = (undefined1 *)0x4c7481;
                FUN_004c729f();
                apuStack_2c[0] = local_14;
                apuStack_2c[0] = (undefined1 *)thunk_FUN_00465aae();
                goto LAB_004c748f;
              }
              if (apuStack_2c[0] != (undefined1 *)0x1002e) {
                apuStack_2c[0] = (undefined1 *)FUN_00466987();
                local_8 = CONCAT31(local_8._1_3_,1);
                thunk_FUN_00465b22(local_14);
                thunk_FUN_00465ac3();
                apuStack_2c[0] = (undefined1 *)0x4c74e4;
                FUN_004652d6();
                goto LAB_004c74e4;
              }
              apuStack_2c[0] = (undefined1 *)0x4c74a3;
              FUN_004c729f();
              apuStack_2c[0] = local_14;
              apuStack_2c[0] = (undefined1 *)thunk_FUN_00465aae();
            }
            thunk_FUN_00465aae();
            goto LAB_004c74e4;
          }
          apuStack_2c[0] = (undefined1 *)0x4c7445;
          FUN_004c729f();
          apuStack_2c[0] = local_14;
          apuStack_2c[0] = (undefined1 *)thunk_FUN_00465aae();
        }
LAB_004c748f:
        thunk_FUN_00465b22();
        goto LAB_004c74e4;
      }
      apuStack_2c[0] = apuStack_2c[0] + -0x10060;
      FUN_004c729f();
      thunk_FUN_00465aae(local_14);
    }
    else {
      apuStack_2c[0] = apuStack_2c[0] + -0x1006f;
      thunk_FUN_00465b22(local_14);
    }
    thunk_FUN_00465ba6();
  }
LAB_004c74e4:
  apuStack_2c[0] = local_14;
  FUN_004652e4();
LAB_004c74f0:
  apuStack_2c[0] = (undefined1 *)0x4c74f8;
  FUN_004652d6();
  return param_1;
}

