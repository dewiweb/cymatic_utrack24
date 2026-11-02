// rea decompile_all
// name: FUN_00664710
// address: 0x664710
// body: available
// range: 0x664710-0x664895 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00664710(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
LAB_00664717:
  do {
    if (param_1[0x5f] == 0) {
      if (*(char *)(param_1[0x65] + 0xc) == '\0') {
        cVar1 = FUN_006649e0();
      }
      else {
        cVar1 = FUN_00664aa0();
      }
      if (cVar1 == '\0') {
        return 0;
      }
    }
    switch(param_1[0x5f]) {
    case 1:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
      *(undefined4 *)(*param_1 + 0x14) = 0x5c;
      *(int *)(*param_1 + 0x18) = param_1[0x5f];
      (**(code **)(*param_1 + 4))(param_1,1);
      param_1[0x5f] = 0;
      goto LAB_00664717;
    default:
      *(undefined4 *)(*param_1 + 0x14) = 0x44;
      goto LAB_00664829;
    case 0xc0:
    case 0xc1:
      uVar2 = 0;
      goto LAB_00664778;
    case 0xc2:
      uVar2 = 0;
      goto LAB_00664778;
    case 0xc3:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xcb:
    case 0xcd:
    case 0xce:
    case 0xcf:
      *(undefined4 *)(*param_1 + 0x14) = 0x3c;
LAB_00664829:
      *(int *)(*param_1 + 0x18) = param_1[0x5f];
      (**(code **)*param_1)(param_1);
LAB_0066483e:
      param_1[0x5f] = 0;
      goto LAB_00664717;
    case 0xc4:
      cVar1 = FUN_00665710();
      break;
    case 0xc9:
      uVar2 = 1;
      goto LAB_00664778;
    case 0xca:
      uVar2 = 1;
LAB_00664778:
      cVar1 = FUN_00665d60(uVar2);
      break;
    case 0xcc:
    case 0xdc:
      cVar1 = FUN_00664bc0(param_1);
      break;
    case 0xd8:
      cVar1 = FUN_00666090();
      if (cVar1 == '\0') {
        return 0;
      }
      goto LAB_0066483e;
    case 0xd9:
      *(undefined4 *)(*param_1 + 0x14) = 0x55;
      (**(code **)(*param_1 + 4))(param_1,1);
      param_1[0x5f] = 0;
      return 2;
    case 0xda:
      cVar1 = FUN_00665a70();
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[0x5f] = 0;
      return 1;
    case 0xdb:
      cVar1 = FUN_00665470();
      break;
    case 0xdd:
      cVar1 = FUN_00665360();
      break;
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
      cVar1 = (**(code **)(param_1[0x65] + -0x364 + param_1[0x5f] * 4))(param_1);
      break;
    case 0xfe:
      cVar1 = (**(code **)(param_1[0x65] + 0x18))(param_1);
    }
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0x5f] = 0;
  } while( true );
}

