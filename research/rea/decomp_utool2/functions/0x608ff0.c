// rea decompile_all
// name: FUN_00608ff0
// address: 0x608ff0
// body: available
// range: 0x608ff0-0x6091fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00608ff0(void)

{
  int iVar1;
  int in_EDX;
  undefined4 extraout_EDX;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  if (in_EDX < 0x40) {
    switch(in_EDX) {
    case 1:
      puVar2 = &DAT_00bf4414;
      break;
    case 2:
      puVar2 = &DAT_00be91c4;
      break;
    case 3:
      puVar2 = &DAT_00be8fb4;
      break;
    case 4:
      puVar2 = &DAT_00be9adc;
      break;
    case 5:
      puVar2 = &DAT_00be970c;
      break;
    case 6:
      puVar2 = &DAT_00be9db4;
      break;
    case 7:
      puVar2 = &DAT_00be9bcc;
      break;
    case 8:
      puVar2 = &DAT_00beab74;
      break;
    case 9:
      puVar2 = &DAT_00bea77c;
      break;
    case 10:
      puVar2 = &DAT_00bfdad0;
      break;
    case 0xb:
      puVar2 = &DAT_00bfd2e4;
      break;
    case 0xc:
      puVar2 = &DAT_00bebe14;
      break;
    case 0xd:
      puVar2 = &DAT_00beba9c;
      break;
    case 0xe:
      puVar2 = &DAT_00bec264;
      break;
    case 0xf:
      puVar2 = &DAT_00bebe7c;
      break;
    case 0x10:
      puVar2 = &DAT_00bec8fc;
      break;
    case 0x11:
      puVar2 = &DAT_00bec6ec;
      break;
    case 0x12:
      puVar2 = &DAT_00bfce04;
      break;
    case 0x13:
      puVar2 = &DAT_00bfdac8;
      break;
    case 0x14:
      puVar2 = &DAT_00beb654;
      break;
    case 0x15:
      puVar2 = &DAT_00beb58c;
      break;
    case 0x16:
      puVar2 = &DAT_00bfcd64;
      break;
    case 0x17:
      puVar2 = &DAT_00bfd28c;
      break;
    case 0x18:
      puVar2 = &DAT_00bfdad8;
      break;
    case 0x19:
      puVar2 = &DAT_00bfdad4;
      break;
    case 0x1a:
      puVar2 = &DAT_00bfdae0;
      break;
    case 0x1b:
      puVar2 = &DAT_00bfdadc;
      break;
    default:
      puVar2 = &DAT_00738c2b;
    }
    FUN_0045c990(puVar2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (in_EDX + -0x3f < 0) {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    FUN_004557e0(&local_9 + -(iVar1 + -1));
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_9 + -iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar3);
  return;
}

