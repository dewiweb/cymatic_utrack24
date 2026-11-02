// rea decompile_all
// name: FUN_0047ee9d
// address: 0x47ee9d
// body: available
// range: 0x47ee9d-0x47f09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0047ee9d(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int in_EDX;
  int **ppiVar4;
  undefined1 *puVar5;
  undefined1 local_48 [20];
  uint local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  byte local_24 [4];
  ushort local_20;
  ushort local_1e;
  byte local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x47eea9;
  FUN_004c6ae2();
  local_8 = 0;
  *(undefined4 *)(in_EDX + 4) = extraout_ECX;
  _eh_vector_constructor_iterator_
            ((void *)(in_EDX + 0x10c),4,0x100,(_func_void_void_ptr *)&LAB_00474e5d,FUN_0041f3a2);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined1 *)(in_EDX + 0x50c) = 0;
  *(undefined1 *)(in_EDX + 0x50d) = 0;
  *(undefined1 *)(in_EDX + 0x50e) = 0;
  *(undefined4 *)(in_EDX + 0x510) = 0;
  *(undefined4 *)(in_EDX + 0x514) = 0;
  *(undefined4 *)(in_EDX + 0x518) = 0;
  *(undefined4 *)(in_EDX + 0x51c) = 0;
  *(undefined4 *)(in_EDX + 0x520) = 0;
  *(undefined4 *)(in_EDX + 0x524) = 0;
  *(undefined4 *)(in_EDX + 0x528) = 0;
  *(undefined4 *)(in_EDX + 0x52c) = 0;
  *(undefined4 *)(in_EDX + 0x530) = 0;
  *(undefined4 *)(in_EDX + 0x534) = 0;
  *(undefined4 *)(in_EDX + 0x538) = 0;
  cVar1 = FUN_0047f09c(&local_34);
  if ((cVar1 != '\0') && (iVar2 = (**(code **)(*local_28 + 0xc))(local_24,3), iVar2 == 3)) {
    local_2c = -1;
    if ((local_24[0] & 0x80) != 0) {
      FUN_0047f136();
    }
    do {
      while( true ) {
        iVar2 = (**(code **)(**(int **)(in_EDX + 4) + 0xc))(local_24,1);
        if ((iVar2 != 1) || (local_24[0] == 0x3b)) goto LAB_0047f094;
        if (local_24[0] != 0x21) break;
        iVar2 = FUN_0047f208();
        if (iVar2 == 0) goto LAB_0047f094;
      }
    } while (local_24[0] != 0x2c);
    iVar2 = (**(code **)(**(int **)(in_EDX + 4) + 0xc))(local_24,9);
    if (iVar2 == 9) {
      local_30 = (uint)local_20;
      local_34 = (uint)local_1e;
      if (((local_1c & 0x80) == 0) || (cVar1 = FUN_0047f136(), cVar1 != '\0')) {
        local_28 = (int *)CONCAT31(local_28._1_3_,-1 < local_2c);
        FUN_0047e303(&local_30,(-1 < local_2c) + '\x01',local_30,local_34,local_28);
        FUN_0049f5e8();
        FUN_004c4d7a();
        FUN_0046163a();
        local_8._0_1_ = 2;
        FUN_00465075(&local_28);
        puVar5 = local_48;
        ppiVar4 = &local_28;
        local_8._0_1_ = 3;
        uVar3 = FUN_0047e74f(ppiVar4,puVar5);
        FUN_00460bc4(uVar3,ppiVar4,puVar5);
        thunk_FUN_004652d6();
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004615f7();
        FUN_0047f624(local_1c >> 6 & 1);
      }
    }
  }
LAB_0047f094:
  FUN_005b9f18();
  return;
}

