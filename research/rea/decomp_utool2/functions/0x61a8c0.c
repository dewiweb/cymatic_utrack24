// rea decompile_all
// name: FUN_0061a8c0
// address: 0x61a8c0
// body: available
// range: 0x61a8c0-0x61aa1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061a8c0(char param_1)

{
  int iVar1;
  code *pcVar2;
  int *in_ECX;
  undefined4 *in_EDX;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte local_2c [35];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar5 = *in_EDX;
  uVar3 = FUN_00443260();
  iVar1 = (int)uVar3;
  while( true ) {
    uVar4 = (uint)uVar3;
    if (iVar1 == 0) {
      __security_check_cookie
                (local_8 ^ (uint)&stack0xfffffffc,(int)((ulonglong)uVar3 >> 0x20),uVar5);
      return;
    }
    if ((uVar4 < 0x80) &&
       ((*(byte *)((int)&PTR_00c1692c + (uVar4 >> 3)) & (byte)(1 << ((byte)uVar3 & 7))) != 0))
    break;
    switch(uVar4) {
    case 10:
    case 0xd:
      if (param_1 == '\0') goto LAB_0061a911;
    default:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c018c0,2);
      if ((int)uVar4 < 0) {
        iVar1 = FUN_006104a0();
        *(undefined1 *)(iVar1 + -1) = 0x2d;
        iVar1 = iVar1 + -1;
      }
      else {
        iVar1 = FUN_006104a0();
      }
      (**(code **)(*in_ECX + 0x10))(iVar1,&local_9 + -iVar1);
      pcVar2 = *(code **)(*in_ECX + 0x14);
      if (pcVar2 == FUN_0062c8e0) {
        local_2c[0] = 0x3b;
        (**(code **)(*in_ECX + 0x10))(local_2c,1);
      }
      else {
        uVar4 = 0x3b;
LAB_0061aa19:
        (*pcVar2)(uVar4);
      }
      break;
    case 0x22:
      (**(code **)(*in_ECX + 0x10))("&quot;",6);
      break;
    case 0x26:
      (**(code **)(*in_ECX + 0x10))("&amp;",5);
      break;
    case 0x3c:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c018c4,4);
      break;
    case 0x3e:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c018b0,4);
    }
LAB_0061a9f5:
    uVar3 = FUN_00443260();
    iVar1 = (int)uVar3;
  }
LAB_0061a911:
  pcVar2 = *(code **)(*in_ECX + 0x14);
  if (pcVar2 == FUN_0062c8e0) {
    local_2c[0] = (byte)uVar3;
    (**(code **)(*in_ECX + 0x10))(local_2c,1);
    goto LAB_0061a9f5;
  }
  goto LAB_0061aa19;
}

