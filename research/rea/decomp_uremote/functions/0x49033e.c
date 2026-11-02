// rea decompile_all
// name: FUN_0049033e
// address: 0x49033e
// body: available
// range: 0x49033e-0x490500 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0049033e(undefined4 param_1,int param_2)

{
  undefined1 *in_EAX;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar2 = 0;
  local_10 = 0x10000;
  local_c = 0;
  local_8 = 0;
  piVar3 = &DAT_005ff618;
  do {
    if ((((CONCAT31(CONCAT21(CONCAT11(in_EAX[0x54],in_EAX[0x55]),in_EAX[0x56]),in_EAX[0x57]) ==
           piVar3[-1]) &&
         (CONCAT31(CONCAT21(CONCAT11(in_EAX[0x58],in_EAX[0x59]),in_EAX[0x5a]),in_EAX[0x5b]) ==
          *piVar3)) &&
        (CONCAT31(CONCAT21(CONCAT11(in_EAX[0x5c],in_EAX[0x5d]),in_EAX[0x5e]),in_EAX[0x5f]) ==
         piVar3[1])) &&
       (CONCAT31(CONCAT21(CONCAT11(in_EAX[0x60],in_EAX[0x61]),in_EAX[0x62]),in_EAX[99]) == piVar3[2]
       )) {
      if (iVar2 == 0) {
        iVar2 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
        local_10 = CONCAT31(CONCAT21(CONCAT11(in_EAX[0x40],in_EAX[0x41]),in_EAX[0x42]),in_EAX[0x43])
        ;
      }
      if ((iVar2 == piVar3[-2]) && (local_10 == *(ushort *)((int)piVar3 + 0xe))) {
        if (param_2 == 0) {
          FUN_0046807d(0,iVar2);
          param_2 = FUN_0046807d();
        }
        if (param_2 == piVar3[-4]) {
          if (local_c == 0) {
            uVar1 = FUN_00468297(0,0,iVar2);
            local_c = FUN_00468297(uVar1);
          }
          if (local_c == piVar3[-3]) {
            iVar2 = local_8 * 0x20;
            if ((&DAT_005ff625)[iVar2] == '\0') {
              if ((&DAT_005ff624)[iVar2] != '\0') goto LAB_004904f7;
              uVar1 = 0;
            }
            else {
              uVar1 = 2;
            }
            FUN_004914c8(uVar1);
LAB_004904f7:
            return (byte)(&DAT_005ff625)[iVar2] + 1;
          }
        }
      }
      if ((char)piVar3[3] != '\0') {
        FUN_00491371();
      }
    }
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 8;
    if (6 < local_8) {
      return 0;
    }
  } while( true );
}

